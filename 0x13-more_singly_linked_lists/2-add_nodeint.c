#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of a linked list
 * @head: head pointer to the first node
 * @n: data of the new element
 * Return: address of the new element of NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
