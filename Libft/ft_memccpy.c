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

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while (i < n)
	{
		s1[i] = s2[i];
		if ((char *)s2[i] == (char) c)
			return (s1[i]);
		i++;
	}
	return (NULL);
}
