#ifndef _list_h_
#define _list_h_

typedef struct s_list t_list;

struct s_list
{
  char *str;
  t_list *next; 
};

t_list *add_link(t_list *list,char *str);
void print_list(t_list *list);

#endif
