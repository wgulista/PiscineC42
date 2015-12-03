/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:02:02 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/03 14:54:35 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*str;

	i = 0;
	if ((str = (char *)b) == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
