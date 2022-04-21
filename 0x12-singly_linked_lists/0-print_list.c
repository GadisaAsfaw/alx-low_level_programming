#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 *print_list - prints all elements of a "list_t" list
 *@h: linked list
 *Return: number of nodes in the linked list h
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
