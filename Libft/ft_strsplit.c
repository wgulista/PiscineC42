/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:27:36 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/03 18:39:05 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	isword;
	size_t	count;

	i = 0;
	isword = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			isword = 0;
		else
		{
			if (isword == 0)
			{
				isword = 1;
				count++;
			}
		}
		i++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int	nbr_word;
	char	**new;

	i = 0;
	nbr_word = ft_count_word(s, c);
	if (!s || !(new = (char **)malloc(sizeof(char *) * nbr_word)))
		return (NULL);
	if(s)
	{
		while (i < nbr_word)
		{
			k = j;
			while (s[j])
			{
				new[i] = ft_strsub(s, j, k);
				j++;
			}
			j = 0;
			i++;
		}
	}
	return (new);
}
/*
int	main(void)
{
	const	char	buf[] = "*salut**les**amis**";
	char		**temp;
	size_t		i = 0;

	temp = ft_strsplit(buf, '*');
	while (temp[i])
	{
		printf("%s\n",temp[i]);
		i++;
	}
	return (0);
}*/
