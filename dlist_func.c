#include "lists.h"

/**
 * free_dlist - free a `list_t` list
 * @head: head of linked list
 */

void free_dlist(stack_t *head)
{
	stack_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

