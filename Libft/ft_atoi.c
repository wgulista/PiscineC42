/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:21:24 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/03 19:38:56 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int num;
	int result;

	i = 0;
	if (str[i] == '\0' || str[i] == '\t' || str[i] == '\n')
		return (0);
	while (str[i])
	{
		if (ft_isalpha(str[i]))
			return (0);
		if (str[i] == '+' || str[i] == '-')
			i++;
		result = str[i] + '0';
		if (ft_isdigit(str[i]))
		{
			result *= 10;
			num = str[i] - '0';
			result += num;
		}
		i++;
	}
	return (result);
}
