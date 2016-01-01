/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:23:50 by wgulista          #+#    #+#             */
/*   Updated: 2016/01/01 16:24:07 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	while (s[i] != (char)c && i < slen)
		i++;
	if (s[i] != (char)c)
		return (NULL);
	return ((char *)&s[i]);
}
