/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:15:01 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/27 18:16:05 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	if (n >= 10)
    {
    	ft_putnbr(n / 10);
   		ft_putnbr(n % 10);
    }
    ft_putchar(48 + n);
}

int	main()
{
	ft_putnbr(-15);
	ft_putnbr(152);
	return (0);
}