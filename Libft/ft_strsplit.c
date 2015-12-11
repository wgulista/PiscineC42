/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgulista <wgulista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:27:36 by wgulista          #+#    #+#             */
/*   Updated: 2015/12/03 18:39:05 by wgulista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	isword;
	size_t	count;

	i = 0;
	isword = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			isword = 0;
		else
		{
			if (isword == 0)
			{
				isword = 1;
				count++;
			}
		}
		i++;
	}
	return (count);
}

char  *ft_strtrimchar(char const *str, char c)
{
  size_t  i;
  char    *new;

  i = 0;
  if (str == NULL)
    return (NULL);
  while (str[i] == c)
    i++;
  while (str[i])
    i++;
  while (i-- > 0)
    ;
  new = ft_strsub(str, 0, i + 1);
  return (new ? new : NULL);
}

int   ft_ischarexist(char const *s, char c)
{
  size_t  i;

  while (s)
  {
    if (s[i] == c)
      return (1);
    else
      return (0);
    i++;
  }
  return (0);
}

char  *ft_create_word(char const *s, char c, size_t j, size_t len)
{
  char  *new;

  s = ft_strtrimchar(s, c);
  while (s[j] != c)
    len++;
  while (s[j])
  {
    if (s[j] != c)
    {
      new = ft_strsub(s, j, len);
    }
    j++;
  }
  return (new);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
  size_t  len;
	int	nbr_word;
	char	**new;

	i = 0;
	if (*s != '\0')
  {
    nbr_word = ft_count_word(s, c);
    if ((new = (char **)malloc(sizeof(char *) * nbr_word)))
    {
      j = 0;
      while (i < nbr_word)
      {
        new[i] = ft_create_word(s, c, j, len);
        i++;
      }
    }
  }
  else
    new[0] = NULL;
  return (new);
}
