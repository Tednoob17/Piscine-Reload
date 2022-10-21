#include "list.h"
#include <stdlib.h>

int main(void)
{
  t_list *list;
  list = NULL;

  list = add_link(list, "goku\n");
  list = add_link(list, "gohan\n");
  list = add_link(list, "goten\n");

  print_list(list);
  
  return (0);
}
