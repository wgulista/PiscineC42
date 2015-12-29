/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:49:12 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/29 15:46:11 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (s != NULL && (char)c != '\0')
	{
		i = 0;
		str = (unsigned char *)s;
		while (i < n)
		{
			if (str[i] == (unsigned char)c)
				return ((void *)(s + i));
			i++;
		}
		return (str);
	}
	return (NULL);
}
