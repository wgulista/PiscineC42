/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:32:28 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/31 13:42:15 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new;

	new = (unsigned char *)malloc(size);
	if (new != NULL)
		ft_memset(new, 0, size);
	else
	{
		free(new);
		new = NULL;
	}
	return ((void *)new);
}
