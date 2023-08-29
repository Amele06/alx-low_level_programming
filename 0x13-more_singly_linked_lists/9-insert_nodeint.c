#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @idx: index of the list where the new node should be added
 * @head: double pointer to the list
 * @n: data to insert in the new node
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || head == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0 ; tmp && i < idx ; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = tmp->next;
			tmp->next = newnode;
			return (newnode);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
