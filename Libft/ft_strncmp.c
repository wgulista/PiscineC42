/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:31:11 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/29 15:23:40 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((s1 == NULL && s2 == NULL) || (s1 == NULL || s2 == NULL))
		return (0);
	if (s1 && s2 && n > 0)
	{
		while (n-- > 0)
		{
			if (*s1 != *s2)
			{
				if ((unsigned char)*s1 > (unsigned char)*s2)
					return ((unsigned char)*s1 - (unsigned char)*s2);
				else
					return (((unsigned char)*s2 - (unsigned char)*s1) * -1);
			}
			if (*s1 == '\0' || *s2 == '\0')
				return (0);
			s1++;
			s2++;
		}
	}
	return (0);
}
