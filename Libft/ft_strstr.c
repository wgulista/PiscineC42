/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:47:56 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/29 15:33:58 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;

	if ((s1 == NULL && *s2 != '\0') || (*s1 != '\0' && s2 == NULL))
		return (NULL);
	if (*s2 == '\0')
		return ((char *)s1);
	i = ft_strlen(s2);
	while (*s1)
	{
		if (ft_strncmp(s1, s2, i) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
