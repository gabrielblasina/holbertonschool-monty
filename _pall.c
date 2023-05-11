#include "monty.h"

void _pall(stack_t **stack, unsigned int __attribute__((unused)) n)
{
    stack_t *curr_node = NULL;

    curr_node = *stack;
    while (curr_node)
    {
        fprintf(stdout, "%d\n", curr_node->n);
        curr_node = curr_node->next;
    }
}