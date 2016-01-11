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

  new = NULL;
  if (size)
  {
    if (!(new = (void *)malloc(size)))
      return (new);
    ft_bzero(new, size);
  }
	return (new);
}
