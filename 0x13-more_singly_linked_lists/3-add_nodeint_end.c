#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint_end - add a a new node at the end of linked list
 *@head: address of head pointer
 *@n: n value for new Node
 *Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h = *head;
	listint_t *t;

	t = malloc(sizeof(listint_t));
	if (t == NULL)
		return (NULL);
	t->n = n;
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
