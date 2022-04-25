#include "lists.h"
/**
 *get_nodeint_at_index - returns nth node of linked list
 *@head: pointer to head node
 *@index: index of the node
 *Return: nth node or null if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i <= index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);

}
