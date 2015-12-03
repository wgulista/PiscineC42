/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:21:27 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/03 19:08:18 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int value;

	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return (0);
	while (s1[i] && s2[i])
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
