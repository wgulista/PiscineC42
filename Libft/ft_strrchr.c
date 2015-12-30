/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:48:53 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/30 13:44:55 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if ((s == NULL || *s == '\0') && c == 0)
		return (NULL);
	i = ft_strlen(s);
	while (s[i] != (char)c && i > 0)
		i--;
	if (s[i] != (char)c)
		return (NULL);
	return ((char *)&s[i]);
}
