/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:40:38 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/30 17:48:06 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new;

	i = 0;
	new = (char *)malloc(sizeof(s) * ft_strlen(s));
	while (s[i] != '\0')
	{
		new[i] = s[i];
		f(i, new[i]);
		i++;
	}
	new[i] = '\0';
}
