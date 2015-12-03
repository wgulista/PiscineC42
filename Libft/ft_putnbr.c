/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:15:01 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/01 13:59:26 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n <= INT_MIN)
	{
		n = INT_MIN;
		ft_putstr("-2147483648");
	}
	if (n >= INT_MAX)
	{
		n = INT_MAX;
		ft_putstr("2147483647");
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	ft_putchar(n + 48);
}