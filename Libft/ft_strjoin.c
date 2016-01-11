/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:18:40 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/03 14:56:11 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
  char  *str;
  int   len;

  len = ft_strlen(s1) + ft_strlen(s2) + 1;
  str = (char *)malloc(sizeof(char) * len);
  if (!str)
    return (NULL);
  ft_strcpy(str, s1);
  ft_strcat(str, s2);
  return (str);
}
