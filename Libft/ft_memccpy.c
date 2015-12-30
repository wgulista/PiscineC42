/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:08:54 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/30 15:10:02 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		if ( src[i] != (unsigned char)c)
			dst[i] = src[i];
		else
			return ((void *)(dst + i + 1));
		i++;
	}
	return (NULL);
}
