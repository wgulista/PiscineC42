/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:21:24 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/26 13:21:32 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int num;
	int result;

	i = 0;
	result = str[i] - '0';
	while (str[i] != '\0')
	{
		if(str[i] >= 48 && str[i] <= 57)
		{
			result *= 10;
			num = str[i] - '0';
			result += num;
		}
		else
			result = 0;
		i++;
	}
	return (result);
}                       
