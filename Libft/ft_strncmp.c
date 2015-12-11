/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:31:11 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/03 18:59:09 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 && s2 && n > 0)
  {
    while (n-- > 0)
    {
      if (*s1 != *s2)
        return ((*s1 > *s2) ? 1 : -1);
      if (*s1 == '\0' || *s2 == '\0')
        return (0);
      s1++;
      s2++;
    }
  }
	return (0);
}
