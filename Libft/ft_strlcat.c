/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:26:30 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/28 20:43:28 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dst);
	size -= i + 1;
	j = ft_strlen((char *)src);
	while (dst[i] != '\0')
	{
		if ((i + j) > size)
			return (0);
		else
		{
			ft_memcpy(dst + i, src, j);
			dst[i] = '\0';
			return (i + j);
		}
		i++;
	}
	return (size);
}
