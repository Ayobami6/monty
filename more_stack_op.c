#include "monty.h"


/*
 * _add - adds the top number and the next number in stacked dll
 * @head: head of am stack dll
 * @line_number: line number
 */
void _add(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;
	int len;
	int sum;

	tmp = *head;
	len = 0;
	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	sum = tmp->n + tmp->next->n;
	tmp->next->n = sum;
	*head = tmp->next;

}

