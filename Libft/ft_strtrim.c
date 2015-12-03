/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:54:24 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/03 18:27:56 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*new;

	i = 0;
	j = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[j - 1] == ' ' || s[j - 1] == '\t' || s[j - 1] == '\n')
		j--;
	k = 0;
	if ((new = (char *)malloc(sizeof(char) * (j - i + 1))) == NULL)
		return (NULL);
	while (k <= j)
	{
		new[k] = s[i + k];
		k++;
	}
	new[k] = '\0';
	return (new);
}