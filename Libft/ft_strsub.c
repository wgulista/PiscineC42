/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 18:09:33 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/01 13:16:46 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (new == NULL)
		return (NULL);
	while (new[start] != '\0' && start < len)
	{
		new[start] = s[start];
		start++;
	}
	new[start] = '\0';
	return (new);
}
