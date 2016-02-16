/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 18:01:45 by wgulista          #+#    #+#             */
/*   Updated: 2016/01/07 16:32:36 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*res;

	res = (unsigned char *)malloc(sizeof(unsigned char) * n);
	if (res)
	{
		ft_memcpy(res, s2, n);
		ft_memcpy(s1, res, n);
	}
	return (s1);
}
