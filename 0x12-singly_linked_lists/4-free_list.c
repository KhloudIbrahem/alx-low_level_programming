#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: the pointer to the first node in the list.
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *node;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		node = head;
		free(node->str);
		free(node);
		head = head->next;
	}
}
