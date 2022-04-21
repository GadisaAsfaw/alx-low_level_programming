#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node - adds a new node at the beginning of a "list_t" list
 *@head: address of head node
 *@str: str value for new the new node
 *
 *Return: pointer to element/node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h;

	new_h = malloc(sizeof(list_t));
	new_h->str = strdup(str);
	new_h->len = strlen(str);
	new_h->next = *head;
	*head = new_h;
	return (new_h);
}
