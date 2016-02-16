/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:21:24 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/31 13:44:11 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_issign(char c)
{
	return (c == '+' || c == '-');
}

static char		*ft_test_sign(const char *s, int *i, int *ispositive)
{
	char	*new;

	new = (char *)s;
	if (new[*i] == '+')
		new++;
	else if (new[*i] == '-')
	{
		*ispositive = -1;
		*i = *i + 1;
	}
	return (new);
}

int				ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	ispositive;

	i = 0;
	result = 0;
	ispositive = 1;
	str = ft_strtrim(str);
	while (str[i] != 0 && ft_isspace(str[i]) && ft_isalpha(str[i]))
		i++;
	if (!ft_isdigit(str[i]) && !ft_issign(str[i]))
		return (0);
	str = ft_test_sign(str, &i, &ispositive);
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * (int)ispositive);
}
