#include "lists.h"
/**
 *reverse_listint - reverses a linked list
 *@head: address of/(pointer to) head node
 *Return: pointer to the new head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *b;

	a = *head;
	*head = (*head)->next;
	a->next = NULL;


	while (*head)
	{
		b = a;

		a = *head;
		*head = (*head)->next;
		a->next = b;
	}
	*head = a;
	return (a);
}
