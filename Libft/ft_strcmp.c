/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:21:27 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/24 17:18:20 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int value;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			value = 1;
			break;
		}
		value = 0;
		i++;
	}
	return value;
}
