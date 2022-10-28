#include <stdlib.h>
#include "list.h"
#include <stdio.h>

void print_list(t_list *list)
{
  while(list)
  {
    printf("%s",list->str);
    list = list->next;
  }
}
