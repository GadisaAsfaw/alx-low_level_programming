#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint - adds a new node at the beginning of a "list_t" list
 *@head: address of head node
 *@n: int value n element of node
 *
 *Return: pointer to head node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_h;

	new_h = malloc(sizeof(listint_t));
	if (new_h == NULL)
		return (NULL);
	new_h->n = n;
	new_h->next = *head;
	*head = new_h;
	return (new_h);
}
