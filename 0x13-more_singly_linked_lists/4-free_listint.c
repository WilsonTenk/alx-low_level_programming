#include "lists.h"

/**
 * free_listint - have to free a linked list
 * @head: listint_t list freeing needed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
