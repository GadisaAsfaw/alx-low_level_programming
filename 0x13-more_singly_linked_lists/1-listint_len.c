#include "lists.h"
/**
 *listint_len - returns number of elements in given linked list
 *@h: linked list
 *Return: length of linked list h
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
