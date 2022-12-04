#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_list - print all elements of a list_t list
*@h: list elements
*Return: number of the nodes or nil (0)
*/
size_t print_list(const list_t *h){
	unsigned int ko = 0;
	if(h)
	{
		while(h)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
				h = h->next;
			}
			else
			{
				printf("[%d] %s\n",h->len,h->str);
				h = h->next;
				ko++;
			}
		}
			
	}
	return(ko);
}
