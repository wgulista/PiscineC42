/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:26:30 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/18 15:27:12 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dlen;
	unsigned int	n;
	char			*new;

	new = dst;
	dlen = ft_strlen(dst);
	n = size - dlen - 1;
	if (size < n || size == 0 || n == 0)
		return (size + ft_strlen(src));
	new = ft_strncat(dst, src, n);
	return (dlen + ft_strlen(src));
}
