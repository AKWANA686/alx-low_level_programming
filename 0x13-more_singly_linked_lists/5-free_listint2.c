#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of a list
 *
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}

	*head = NULL;
}
