#include "lists.h"
#include <stdio.h>
/**
 *reverse_listint - reverses a given list of type listint_t
 *@head: address of pointer to the head node
 *Return: pointer to the first node/head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *tmp;
	tmp = (*head)->next;

	(*head)->next = NULL;
	new_list = *head;

	

	return NULL;
}
