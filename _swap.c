#include "monty.h"
/**
 * _swap - change first two elements of stack
 * Return: EXIT_FAILURE if failure
 * @stack: pointer to the stack
 * @ln: current line number
*/
void _swap(stack_t **stack, unsigned int ln)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
	int aux = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = aux;
}
