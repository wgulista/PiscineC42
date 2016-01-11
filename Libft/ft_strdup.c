/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:34:02 by wgulista          #+#    #+#             */
/*   Updated: 2016/01/01 16:28:50 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
  char  *new;
  int   len;
  
  len = ft_strlen(s1) + 1; 
  if((new = (char *)malloc(sizeof(char) * len)) == NULL)
    return (NULL);
  return (ft_strcpy(new, s1));
}
