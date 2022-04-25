#include "lists.h"
#include <stdlib.h>
/**
 *pop_listint - deletes the head node
 *@head: address (pointer) of head node
 *Return: heads n value;
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *nh;

	if (head)
	{
		n = (*head)->n;
		nh = (*head)->next;
		free(*head);
		*head = nh;
	}
	return (n);
}
