#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 - frees a listint_t list
 *@head: address of head node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
	}
}
