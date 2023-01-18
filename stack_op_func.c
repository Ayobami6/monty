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


/**
 * _pall - print all numbers in the stack
 * @head: head of th stack linked list
 * @line_number: file line_number
 */
void _pall(stack_t **head, unsigned int line_number)
{
	(void)line_number;
	stack_t *tmp;

	tmp = *head;

	while (tmp)
	{
		printf("%d", tmp->n);
		tmp = tmp->next;
	}
}


