#include "lists.h"
/**
 *free_list - free a linked list
 *@head: pointer to head of list
 */
void free_list(list_t *head)
{
	list_t *h = head;
	list_t *hn;
	while (h){
		hn = h->next;
		free(head->str);
		free(head);
		h = h->next;
		head = hn;
	}
}
