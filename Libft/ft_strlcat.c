/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:26:30 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/26 18:44:10 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (size)
	{
		dst[i++] = src[j++];
		size--;
	}
	dst[i] = '\0';
	return (sizeof(dst));
}

/*int		main(void)
{
	char s1[] = "First line ";
	char s2[] = "Second line";

	printf("strlcat vaut '%lu'\n\n", strlcat(s1, s2, sizeof(s1)));
	printf("ft_strlcat vaut '%lu'\n", ft_strlcat(s1, s2, sizeof(s1)));
	return (0);
}*/
