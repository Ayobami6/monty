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
	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (head == NULL ||(*head)->next == NULL || len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	sum = tmp->n + tmp->next->n;
	tmp->next->n = sum;
	*head = tmp->next;

}



/**
 * _nop - does nothing on the satck
 * @head: the head of the stack
 * @line_number: line number
 */
void _nop(__attribute__((unused))stack_t **head, __attribute__((unused)) unsigned int line_number)
{
	;
}

