#include "lists.h"
#include <stdlib.h>
/**
 *delete_nodeint_at_index - deletes node at given index
 *@head: address of pointer to head node
 *@index: index of the node to be removed
 *Return: 1 if success -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t (*temp), (*pre);
	unsigned int i;

	if (!head)
		return (-1);
	else if (!(*head))
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	i = 0;
	while (i < index)
	{
		if (temp->next == NULL)
			return (-1);
		pre = temp;
		temp = temp->next;
		i++;
	}
	pre->next =  temp->next;
	free(temp);
	return (1);
}
