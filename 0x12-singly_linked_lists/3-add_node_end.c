#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head node to the list_t list
 * @str: string to store
 * Return: address of a new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newnode;

	return (newnode);
}
