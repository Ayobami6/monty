#include "monty.h"
buf = {NULL, NULL, NULL};

/**
 * main - main function for monty interpreter
 * @argc: argument count
 * @argv: arrays of arguments
 * Return: returs 0 on success
 */
int main(int argc, string argv[])
{
	string command;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	buf.file = file;

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		command = NULL;
		read_line = getline(&command, &size, file);
		buf.command = command;
		count++;
		if (read_line > 0)
			exec_op(command, &stack, count, file);
		free(command);
	}
	free_dlist(stack);
	fclose(file);
return (0);
}

