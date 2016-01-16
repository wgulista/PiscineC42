#include "libft.h"

void  *ft_realloc(void *ptr, size_t size)
{
  void    *new;
  size_t  size_ptr;

  size_ptr = ft_strlen((char *)ptr) + size;
  new = ft_strnew(size_ptr);
  free(ptr);
  return (new);
}
