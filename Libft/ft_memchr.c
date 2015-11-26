/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:49:12 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/26 18:47:35 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (s == NULL)
		return (NULL);
	while (str[i] != '\0' && str[i] != (char)c && i < n)
		i++;
	if (str[i] != 0 && str[i] == (char)c)
		return ((char *)&str[i]);
	return (str);
}

int		main(void)
{
	const char	str[] = "http://www.google.com/";
	const char	ch = '.';
	char		*ret;

	ret = memchr(str, ch, strlen(str));
	printf("Apres : %s", ret);
	return (0);
}
