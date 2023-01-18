#include "monty.h"

/**
 * _push - push data to the top of a stack
 * @head: the head of a stack double ll
 * @line_number: line number parsed
 */
void _push(stack_t **head, unsigned int line_number)
{
	int n, j = 0, flag = 0;

	if (buf.arg)
	{
		if (buf.arg[0] == '-')
			j++;
		for (; buf.arg[j] != '\0'; j++)
		{
			if (buf.arg[j] > 57 || buf.arg[j] < 48)
				flag = 1;
		}
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", line_number);
			fclose(buf.file);
			free(buf.command);
			free_dlist(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(buf.file);
		free(buf.command);
		free_dlist(*head);
		exit(EXIT_FAILURE); 
	}
	n = atoi(buf.arg);
	if (buf.flag == 0)
		addnode(head, n);
	else
		addqueue(head, n);
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
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}


