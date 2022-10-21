#include "list.h"
#include <stdlib.h>

t_list *add_link(t_list *list, char *str)
{
  t_list *tmp;
  tmp = malloc(sizeof(t_list));
  if (tmp)
  {
    tmp->str = str; 
    tmp->next = list;
  }
  return (tmp);
}
