/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:21:26 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/26 16:31:10 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	int		i;
	char
}

int		main(void)
{
	const char src[50] = "This is a line";
	char dest[50];

	printf("Copie avant memcpy : %s\n", dest);
	memcpy(dest, src, strlen(src) + 1);
  	printf("Copie apres memcpy : %s\n", dest);	
	return(0);
}
