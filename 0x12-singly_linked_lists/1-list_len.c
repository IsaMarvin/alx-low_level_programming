#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t node = 0;

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		node++;
	}
	return (node);
}
