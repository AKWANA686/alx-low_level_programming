#include "lists.h"

/**
 * listint_len - returns the number of elements
 * in a linked listint_t list
 * @h: head
 * Return: 0
 */

size_t listint_len(const listint_t *h)
{
	int x = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		x++;
		h = h->next;
	}

	return (x);
}
