#include "monty.h"
/**
 * main - entry point
 * Return: EXIT_SUCCESS
 * @argc: number of arguments
 * @argv: string of arguments
 *
*/
int main(int argc, char **argv)
{
	unsigned int line = 0;
	char *buff = NULL, *opcode = NULL;
	size_t buffsize = 0;
	stack_t *node = NULL;
	void (*func)(stack_t **, unsigned int);

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	FILE *monty_f = fopen(argv[1], "r");

	if (monty_f == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buff, &buffsize, monty_f) != -1)
	{
		line++;
		opcode = strtok(buff, " \n\t");
		if (opcode == NULL || strcmp(opcode, "\n") == 0)
			continue;
		func = execute(opcode);
		if (func == NULL)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line, opcode);
			exit(EXIT_FAILURE);
		}
		func(&node, line);
	}
	free(buff);
	fclose(monty_f);
	free_all(node);
	return (EXIT_SUCCESS);
}
