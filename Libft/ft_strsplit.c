/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:27:36 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/11 20:04:16 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_count_word(char const *s, char c)
{
	size_t	isword;
	size_t	count;

	isword = 0;
	count = 0;
	while (*s)
	{
		if (*s == c)
			isword = 0;
		else if (isword == 0)
		{
			isword = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i] == c)
		i++;

	while (s[i])
	{
		if (s[i] != c)
			len++;
		i++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	nbr_word;
 
	if (*s != '\0')
	{
		char	**new;
		nbr_word = ft_count_word(s, c);
		if (!(new = (char **)malloc(sizeof(char *) * nbr_word)))
		{
			new[0] = NULL;
			return (new);
		}
		i = 0;
		while (i < nbr_word)
		{
			if ((new[i] = (char *)malloc(sizeof(char))))
			{
				j = 0;
				while (s[j])
 				{
					len = ft_word_len(s, c, j);
					if (s[j] == c)
						j++;
					else
					{
						new[i] = ft_strsub(s, j, len);
					}
					j++;
				}
			}
			else
				new[0] = NULL;
			i++;
		}
		return (new);
	}
	return (NULL);
}

int		main(void)
{
	char	**split;
	int		i;

	split = ft_strsplit("**salut**les**amis**", '*');
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
