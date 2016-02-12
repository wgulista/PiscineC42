#include "libft.h"

int   ft_isprime(int nb)
{
  int is_prime;
  int i;

  i = 2;
  is_prime = 0;
  while (i < nb)
  {
    if (nb % i == 0)
      is_prime = 0;
    i++;
  }
  if (!is_prime)
    return (0);
  return (1);
}
