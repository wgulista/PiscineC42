/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 09:42:47 by wgulista          #+#    #+#             */
/*   Updated: 2016/01/12 09:46:10 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstswap(t_list *a, t_list *b)
{
	t_list	*temp;

	temp->content = a->content;
	temp->content_size = a->content->size;
	a->content = b->content;
	a->content_size = b->content_size;
	b->content = temp->content;
	b->content_size = temp->content_size;
}
