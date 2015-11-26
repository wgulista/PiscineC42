/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:21:26 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/26 17:49:00 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*dest;
	char		*src;

	i = 0;
	dest = (char *)s1;
	src = (char *)s2;
	if (src == NULL || dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		if (i < n)
			dest[i] = src[i];
		i++;
	}
	return (s1);
}
