#include "lists.h"

/**
 * insert_nodeint_at_index -put a fresh node in a linked list,
 * in a given position
 * @head: pointer to the first node in the list should be done
 * @idx: index where the new node is added as well
 * @n: data to insert in a fresh  node
 *
 * Return: pointer to the new node, or it should return  NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
