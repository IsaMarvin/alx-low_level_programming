#include "lists.h"

/**
 * free_list - Frees a list_t list, including its nodes and strings.
 * @head: A pointer to the head of the list
 * Return: No return value (void)
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
