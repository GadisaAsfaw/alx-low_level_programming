#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end - add a a new node at the end of linked list
 *@head: address of head pointer
 *@str: str value for new Node
 *Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h = *head;
	list_t *t;

	t = malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);
	t->str = strdup(str);
	t->len = strlen(str);
	t->next = NULL;
	if (!h)
	{       *head = t;
		return (t);
	}
	while (h->next != NULL)
		h = h->next;
	h->next = t;
	return (t);
}
