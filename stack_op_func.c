#include "monty.h"

/**
 * _push - push data to the top of a stack
 * @head: the head of a stack double ll
 * @line_number: line number parsed 
 */
void _push(stack_t **head, unsigned int line_number)
{
	stack_t *top;
	(void)line_number;

	top = malloc(size_of(stack_t));
	if (top == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	top->n = buf.arg;
	top->next = *head;
	if (*head != NULL)
		(*stack)->prev = top;
	(*stack) = top;
}

