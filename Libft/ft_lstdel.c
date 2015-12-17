#include "libft.h"

void  ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
  t_list  *lst;

  lst = *alst;
  while (lst)
  {
    *alst = lst->next;
    del(lst->content, lst->content_size);
    free(lst);
    lst = *alst;
  }
  *alst = NULL;
}
