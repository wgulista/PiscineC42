/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 18:09:33 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/31 13:37:52 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	new = ft_memalloc(1);
	if (s && len > 0)
	{
		new = (char *)malloc(sizeof(char) * (len + 1));
		if (new)
		{
			i = 0;
			while (i < len)
				new[i++] = s[start++];
			new[i] = '\0';
		}
	}
	return (new);
}
