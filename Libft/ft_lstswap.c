#include "libft.h"

void    ft_lstswap(t_list *a, t_list *b)
{
  t_list  *temp;

  temp->content = a->content;
  temp->content_size = a->content->size;
  a->content = b->content;
  a->content_size = b->content_size;
  b->content = temp->content;
  b->content_size = temp->content_size;
}
