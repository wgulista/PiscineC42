/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:36:58 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/30 17:40:13 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*f_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*new;

	i = 0;
	if (new = (char *)malloc(sizeof(char) * ft_strlen(s)) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = str[i];
		f(new[i]);
		i++;
	}
	new[i] = '\0';
}
