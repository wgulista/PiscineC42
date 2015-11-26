/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:01:51 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/26 18:58:23 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*str1;
	char		*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str1[i] != '\0' && i < n)
	{
		if (str1[i] != str2[i])
		{
			return (1);
			break ;
		}
		i++;
	}
	return (str1[i] - str2[i]);
}

int		main(void)
{
	char	str1[15];
	char	str2[15];
	int		ret;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "ABCDEF", 6);
	ret = ft_memcmp(str1, str2, 6);
	printf("%i", ret);
	return (0);
}
