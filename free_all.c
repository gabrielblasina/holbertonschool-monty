#include "monty.h"
/**
 * free_all - function to free all stack
 * @stack: pointer to the stack
 * Return: Nothing
*/
void free_all(stack_t *stack)
{
	stack_t *curr_node = stack;
	stack_t *next_node;

	while (curr_node)
	{
		next_node = curr_node->next;
		free(curr_node);
		curr_node = next_node;
	}
}
