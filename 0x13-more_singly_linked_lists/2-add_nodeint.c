#include "lists.h"

/**
 * add_nodeint - must adds a new node at the start of a linked list
 * @head: pointer to the first node in the list for me
 * @n: data to insert in that new node
 *
 * Return: pointer 2 the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
