/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:08:54 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/03 17:48:00 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t		i;
	char		*dest;
	char		*src;

	i = 0;
	dest = (char *)s1;
	src = (char *)s2;
	while (src[i] != '\0' && src[i] != (char)c && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = (char)c;
	return (dest);
}
