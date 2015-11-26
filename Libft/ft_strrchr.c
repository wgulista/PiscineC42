/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:48:53 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/26 13:59:22 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
		i++;
	while (s[i] != (char)c)
		i--;
	if (s[i] != 0 && s[i] == (char) c)
		return ((char *)&s[i]);
	return (0);
}
