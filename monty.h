#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void _add(stack_t **stack, unsigned int line_number);
void free_all(stack_t *stack);
void (*execute(char *opcode))(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int __attribute__((unused)) n);
void _pint(stack_t **stack, unsigned int n);
void _pop(stack_t **stack, unsigned int n);
void _push(stack_t **stack, unsigned int ln);
void _nop(stack_t **stack, unsigned int n);
#endif