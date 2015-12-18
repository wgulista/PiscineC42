/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:27:36 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/18 15:51:53 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_count_word(char const *s, char c)
{
	size_t	count;
	size_t	word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s == c)
			word = 0;
		else if (word == 0)
		{
			word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

size_t		ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	nbr_word;
	char	**new;

	if (s)
	{
		nbr_word = ft_count_word(s, c);
		if (!(new = (char **)malloc(sizeof(char *) * nbr_word + 1)))
			return (NULL);
		i = 0;
		while (i < nbr_word)
		{
			while (*s == c && *s != '\0')
				s++;
			if ((new[i] = ft_strsub(s, 0, ft_word_len(s, c))))
				s += ft_word_len(s, c);
			i++;
		}
		new[i] = NULL;
	}
	else
		new[i] = NULL;
	return (new);
}
