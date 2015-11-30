/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:08:10 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/28 20:39:16 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	if (!s)
		ft_putchar_fd('\n', fd);
	else
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
