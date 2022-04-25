#include "lists.h"
#include <stdlib.h>
/**
 *free_listint - free a linked list
 *@head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *hn;

	while (head)
	{
		hn = head->next;
		free(head);
		head = hn;
	}
}
