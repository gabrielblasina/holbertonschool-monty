#include "monty.h"
/**
 * _push - push a node into the stack
 * Return: EXIT_FAILURE if failure
 * @stack: pointer to the stack
 * @ln: current line number
*/
void _push(stack_t **stack, unsigned int ln)
{
	stack_t *new_node = NULL;
	int num = 0;
	char *c2int = NULL;

	c2int = strtok(NULL, " \n\t");
	if (c2int == NULL || !isdigit((unsigned char)*c2int))
	{
		fprintf(stderr, "L%u: usage: push integer\n", ln);
		exit(EXIT_FAILURE);
	}
	num = atoi(c2int);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*stack == NULL)
	{
		*stack = new_node;
		return;
	}
	new_node->next = *stack;
	(*stack)->prev = new_node;
	*stack = new_node;
}
