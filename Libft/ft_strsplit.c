/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:27:36 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/02 15:43:21 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrimchar(char *s, char c)
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
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (str == NULL)
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

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	next;
	int		nbrword;
	char	**new;

	i = 0;
	s = ft_strtrimchar((char *)s, c);
	nbrword = ft_count_word(s, c);
	if ((new = (char **)malloc(sizeof(char *) * (nbrword + 1))) == NULL)
		return (NULL);
	i = 0;
	while ((int)i < nbrword)
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (s[i] == c)
				next = 0;
			else
			{
				if (next == 0)
					new[i] = ft_strdup(s);
				next = 1;
			}
			j++;
		}
		ft_strtrim(new[i]);
		i++;
	}
	return (new);
}

int		main(void)
{
	int		i;
	char	**tableau;

	tableau = ft_strsplit("*salut **les**amis**Slaut", '*');
	i = 0;
	while (tableau[i])
	{
		printf("%s\n", tableau[i]);
		i++;
	}
	return (0);
}
