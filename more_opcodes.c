#include "monty.h"


/**
 * _mod - find the modulus of the top and next element in a dll
 * @head: head of dll
 * @line_number: line number
 */
void _mod(stack_t **head, unsigned int line_number)
{
	int result;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	result = (*head)->n;
	_pop(head, line_number);
	(*head)->n %= result;
}

