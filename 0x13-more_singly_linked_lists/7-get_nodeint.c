#include "lists.h"

/**
 * get_nodeint_at_index - should return de node at index in a linked list
 * @head: first node in the linked list here
 * @index: index of the node to return also
 *
 * Return: pointer to the node we're looking for, or NULL as feedback
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
