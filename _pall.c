#include "monty.h"
/**
 * _pall - print all nodes of the stack
 * @stack: pointer to the stack
 * @n: current line number (unused)
*/
void _pall(stack_t **stack, unsigned int __attribute__((unused)) n)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
