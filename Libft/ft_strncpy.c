/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:07:13 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/24 17:19:59 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
	   dest[i] = src[i];
	   i++;
	}
	dest[i] = '\0';
	return dest;
}
