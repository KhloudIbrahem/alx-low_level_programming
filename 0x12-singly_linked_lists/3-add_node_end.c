#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the pointer to the first node in the list.
 * @str: the value in the node.
 * Return: the address of the new element,
 * or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	unsigned int size = 0;
	list_t *tmp = *head;

	while (str[size])
		size++;
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = size;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;
	return (*head);
}
