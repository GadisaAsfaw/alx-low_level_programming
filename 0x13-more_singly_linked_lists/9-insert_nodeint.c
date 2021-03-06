#include "lists.h"
#include <stdlib.h>
/**
 *insert_nodeint_at_index - insert new node at a given position
 *@head: head node
 *@idx: index of list where the new node shuld be added
 *@n: data of new node
 *Return: pointer to new node;
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t (*new_node), (*pre), (*post) = NULL;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!head)
		return (NULL);
	/*if list is empty or if new insertion is at head/index 0 */
	if (!(*head) || idx == 0)
	{
		post = *head;
		*head = new_node;
		new_node->next = post;
		return (new_node);
	}

	post = *head;
	for (i = 0; i < idx; i++)
	{
		/*idx is greater than length of the*/
		/*list(its not possible to insert/add) Return NULL*/
		if (post == NULL)
			return (NULL);
		pre = post;
		post = post->next;
	}
	if (pre != NULL)
		pre->next = new_node;
	new_node->next = post;
	return (new_node);
}
