/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:12:56 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/24 18:39:08 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i;
	char *result;

	i = 0;
	while (s[i] != '\0')
	{
		
		i++;
	}
	result = "\0";
	return result;
}

int		main(void)
{
	char *s;
	char buff[] = "This is a test";

	s = ft_strchr(buff, 't');

	if(s != NULL)
		printf("trouve 't' dans %s", s);

	return 0;
}
