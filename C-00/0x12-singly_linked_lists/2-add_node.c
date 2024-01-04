#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *add_note - add a new node at the beginning of a list_t
*@head: first nodes of a list
*@str: node add
* Return: address of a new element.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp){
	(tmp)->str = *str;
	tmp->next = head;
	printf("[%d] %s", tmp->len, tmp->str);
	}
	return (tmp);
}
