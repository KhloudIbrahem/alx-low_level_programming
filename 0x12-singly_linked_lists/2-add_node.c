#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the pointer to the first node in the list.
 * @str: the value inside the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int size = 0;

	while (str[size])
		size++;
	node = malloc(sizeof(list_t ));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = size;
	node->next = (*head);
	(*head) = node;
	return (*head);
}
