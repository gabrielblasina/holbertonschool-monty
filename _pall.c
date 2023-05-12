#include "monty.h"
/**
 * _pall - print all nodes of the stack
 * @stack: pointer to the stack
 * @n: current line number (unused)
*/
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