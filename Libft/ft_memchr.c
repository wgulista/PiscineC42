/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:49:12 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/03 19:30:44 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (s == NULL || c == 0 || str[i] == '\0')
		return (0);
	else
	{
		while (str[i] != '\0' && str[i] != (char)c && i < n)
			i++;
		if (str[i] != 0 && str[i] == (char)c)
			return ((char *)&str[i]);
		return (str);
	}
}
