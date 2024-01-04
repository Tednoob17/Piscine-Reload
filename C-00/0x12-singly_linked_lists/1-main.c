#include "lists.h"

/**
*list_len - print number of nodes in list
*@h: list 
*Return: number of nodes in list
*/
size_t list_len(const list_t *h)
{
unsigned number = 0;
	while(h){
		h = h->next;
		number++;
	}
	return(number);
}
