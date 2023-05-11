#include "monty.h"

void _pint(stack_t **stack, unsigned int n)
{
    stack_t *curr_node = NULL;

    curr_node = *stack;
    if (curr_node == NULL)
    {
        fprintf(stderr, "L%u: can't pint, stack empty\n", n);
        exit(EXIT_FAILURE);
    }
    fprintf(stdout, "%d\n", curr_node->n);
}