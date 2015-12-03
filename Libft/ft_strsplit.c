/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:27:36 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/03 18:19:43 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strtrimchar(const char *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*str;

	j = ft_strlen(s);
	i = 0;
	while (s[i] == c)
		i++;
	while (s[j - 1] == c)
		j--;
	if ((str = (char *)malloc(sizeof(char) * (j - i + 1))) == NULL)
		return (NULL);
	k = 0;
	while (k < j)
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}

int		ft_count_word(const char *s, char c)
{
	unsigned int	i;
	unsigned int	count;
	unsigned int	found;

	i = 0;
	count = 0;
	found = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			found = 0;
		else
		{
			if (found == 0)
				count++;
			found = 1;
		}
		i++;
	}
	return ((int)count);
}

char	*ft_strndup(const char *str, char c, int len)
{
	unsigned int	i;
	char			*new;

	i = 0;
	if ((new = (char *)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	while (str[i] != '\0' && str[i] != c && (int)i < len)
	{
		new[i] = str[i];
		i++;
	}
	if (str[i] != 0 && str[i] == c)
		new = (char *)&str[i];
	return (new);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		nbrword;
	char	**new;

	i = 0;
	s = ft_strtrimchar(s, c);
	nbrword = ft_count_word(s, c);
	if (((new = (char **)malloc(sizeof(char *) * (nbrword + 1)))) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while ((int)i < nbrword)
	{
		new[i] = ft_strndup(s, c, ft_strlen(new[i]));
		printf("%s\n", new[i]);
		i++;
	}
	return (new);
}

/*int		main(void)
{
	int		i;
	char	**tableau = 0;

	tableau = ft_strsplit("*salut**les***amis**", '*');
	i = 0;
	while (tableau[i])
	{
		printf("%s\n", tableau[i]);
		i++;
	}
	return (0);
}*/
