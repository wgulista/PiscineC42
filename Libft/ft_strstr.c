/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:47:56 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/03 17:30:25 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
  size_t  i;
  size_t  j;

  i = 0;
  j = 0;
  if (s2[0] == '\0'|| s1[0] == '\0')
    return (NULL);
  while (s1[i])
  {
    j = i;
    while (s1[i] == s2[j])
    {
      j++;
      if (s2[j] == '\0')
        return ((char *)&s1[i]);
    }
    i++;
  }
  return (NULL);
}
