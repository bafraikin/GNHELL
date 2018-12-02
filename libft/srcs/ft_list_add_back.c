
#include "libft.h"

void	ft_list_add_back(t_list **begin_list, void *content,
    size_t content_size)
{
  t_list *new;

  if (!(*begin_list))
  {
    *begin_list = ft_lstadd(content, content_size);
    return ;
  }
  new = *begin_list;
  while (new->next)
    new = new->next;
  new->next = ft_lstadd(content, content_size);
}
