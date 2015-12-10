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
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*new;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (ft_isspace(s[i]))
		s++;
	while (s[i])
		i++;
	while (i-- > 0 && ft_isspace(s[i]))
		;
	new = ft_strsub(s, 0, i + 1);
	if (new)
		return (new);
	return (NULL);
}
