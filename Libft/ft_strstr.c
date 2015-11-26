/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:47:56 by wgulista          #+#    #+#             */
/*   Updated: 2015/11/26 18:38:57 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	if(s1 == NULL || !s1 || !s2)
		return (NULL);
	j = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			retu
		i++;
	}
	return (0);	
}

/*int		main(void)
{
	const char haystack[20] = "wgul@student.fr";
	const char needle[10] = "@";
	char *res1;
	char *res2;

	res1 = strstr(haystack, needle);
	printf("strstr vaut %s\n\n", res1);

	res2 = ft_strstr(haystack, needle);
	printf("ft_strstr vaut %s", res2);

	return (0);
}*/
