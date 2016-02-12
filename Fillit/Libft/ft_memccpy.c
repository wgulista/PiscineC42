/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:08:54 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/31 14:55:19 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = 0;
	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	while (i < n)
	{
		dst[i] = src[i];
		if (src[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
