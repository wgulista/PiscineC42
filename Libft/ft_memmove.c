/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 18:01:45 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/29 15:17:08 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	res[n];

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	ft_memcpy(res, s2, n);
	ft_memcpy(s1, res, n);
	return (s1);
}
