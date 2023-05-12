#include "monty.h"

int execute(stack_t **stack, int line, char *buff)
{
    instruction_t funsele[] = {
        {"push", _push},
        {NULL, NULL}
    };
    int x;
    char *opcodeo = strtok(buff, " \n\t");

    for(x = 0; opcodeo; x++)
    {
        if (!strcmp(opcodeo, funsele[x].opcode)
        {
            funsele[x].f;
            return (0);
        }
    }
}