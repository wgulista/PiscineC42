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
	int result;

	i = 0;
	result = 0;
	while (str[i] != '\0' && ft_isspace(str[i]) && ft_isalpha(str[i]))
	{
		if (str[i] != '\0' && str[i] == '+' && ft_isdigit(str[i]))
			result = result * 10 + str[i] - 48;
		if (str[i] == '-' && result < 0)
			result *= -1;
		i++;
	}
	return (result);
}
