#include "lists.h"

/**
 * print_listint - This should print all the elements of a linked list for me
 * @h: linked list to type listint_t to be  printed
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
