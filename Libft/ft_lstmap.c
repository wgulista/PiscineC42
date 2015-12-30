/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 15:23:17 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/30 15:51:45 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;

	if (lst)
	{
		if (!(fresh = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		fresh = f(lst);
		fresh->next = ft_lstmap(lst->next, f);
		return (fresh);
	}
	return (NULL);
}
