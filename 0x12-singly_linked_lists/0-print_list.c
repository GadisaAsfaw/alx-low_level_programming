#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_list - prints all elements of a "list_t" list
 *@h: linked list
 *Return: number of nodes in the linked list h
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
        if(!h)
		printf("[0] (nil)");
	while(h)
	{
		printf("[%d] %s",f->len,f->str);
		h = h->next;
		count++;
	}
	return (count);
}
