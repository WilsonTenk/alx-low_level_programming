#include "lists.h"

/**
 * free_listint2 - must free a linked list for me
 * @head: pointer to the listint_t list to be freed here
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
