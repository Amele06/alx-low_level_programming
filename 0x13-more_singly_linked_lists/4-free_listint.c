#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head pointer to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
