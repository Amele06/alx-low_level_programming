#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of node
 * @str: string to store
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int j, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (j = 0 ; str[j] != '\0' ; j++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
