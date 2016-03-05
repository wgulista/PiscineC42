/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 12:25:22 by wgulista          #+#    #+#             */
/*   Updated: 2016/03/05 12:25:24 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			check_line(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] != '\n')
		return (-1);
	return (i);
}

static char			*ft_join(char **dest, char *src)
{
	char	*temp;

	temp = NULL;
	temp = ft_strjoin(*dest, src);
	if (!temp)
		return (NULL);
	ft_strdel(dest);
	return (temp);
}

static char			*ft_fill(int chk, char **rest, char **line)
{
	char	*new_rest;

	new_rest = NULL;
	if (!(*line = ft_strsub(*rest, 0, chk)))
		return (NULL);
	if (!(new_rest = ft_strsub(*rest, chk + 1, ft_strlen(*rest) - chk + 1)))
		return (NULL);
	ft_strdel(rest);
	return (new_rest);
}

int					get_next_line(int fd, char **line)
{
	static char		*rest[256];
	char			buff[BUFF_SIZE + 1];
	int				rd;
	int				chk;

	if (!line || fd < 0)
		return (-1);
	rd = 0;
	while ((chk = check_line(rest[fd])) == -1)
	{
		if ((rd = read(fd, buff, BUFF_SIZE)) == -1)
			return (-1);
		buff[rd] = '\0';
		rest[fd] = ft_join(&rest[fd], buff);
		if (!rest[fd])
			return (-1);
		ft_strclr(buff);
		if (rd == 0)
		{
			*line = ft_join(&rest[fd], buff);
			return (0);
		}
	}
	rest[fd] = ft_fill(chk, &rest[fd], line);
	return (1);
}
