/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:54:24 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/30 18:00:06 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*new;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_whitespace(s[i]) == 0)
			new[i] = s[i];
		i++;
	}
	new[i] = '\0';
}

int		ft_whitespace(char	s)
{
	if (s == ' ' || s == '\t')
		return (1);
	return (0);
}
