#include "lists.h"
/**
 *sum_listint - sums all data(n) of list
 *@head: head node
 *Return: sum of n of each node
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
