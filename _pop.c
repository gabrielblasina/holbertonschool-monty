#include "monty.h"

void _pop(stack_t **stack, unsigned int n)
{
    stack_t *curr_node = NULL;

    curr_node = *stack;
    if (curr_node == NULL)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", n);
        exit(EXIT_FAILURE);
    }
    *stack = curr_node->next;
    if (curr_node->next != NULL)
        curr_node->next->prev = NULL;
    free(curr_node);
}