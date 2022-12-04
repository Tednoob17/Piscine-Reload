#include "lists.h"
#include <stdio.h>
/**
* *add_note - add a new node at the beginning of a list_t
*@head: first nodes of a list
*@str: node add
* Return: address of a new element.
*/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int *addr = 0;
	list_t ***next;

	next = &head;
	head->str = str;
	head->next = next;
	printf("[%d] %s", head->len, head->str);
	addr = head->str;
	return (addr);
}
