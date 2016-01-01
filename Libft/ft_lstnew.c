/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 15:23:23 by wgulista          #+#    #+#             */
/*   Updated: 2016/01/01 17:17:04 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (temp)
	{
		if (content == NULL)
			temp->content = NULL;
		else
			temp->content = (void *)content;
		temp->content_size = 0;
		temp->next = NULL;
	}
	else
		free(temp);
	return (temp);
}
