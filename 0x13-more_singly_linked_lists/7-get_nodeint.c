#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head pointer to the first node
 * @index: index of the node to return
 * Return: pointer or NULL if node doesn't exit
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0 ; i < index ; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}

