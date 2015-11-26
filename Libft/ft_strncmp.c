/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:31:11 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/26 18:29:10 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int value;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			value = 1;
			break ;
		}
		value = 0;
		i++;
	}
	return (value);
}
