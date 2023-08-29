#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer of listint_t
 * Return: head node’s data (n) or 0 if link is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}
