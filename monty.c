#include "monty.h"

int main(int argc, char **argv)
{
    int line = 0;
    char *buff = NULL, *opcode = NULL;
    size_t buffsize = 0;
    stack_t *node;
    
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file");
        exit(EXIT_FAILURE);
    }
    FILE *monty_f = fopen(argv[1], "r");
    if (monty_f == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s", argv[1]);
        exit(EXIT_FAILURE);
    }
    while (getline(&buff, &buffsize, monty_f) > 0)
    {
        *buff = NULL;
        line ++;
        opcode = strtok(buff, " \n\t");
        execute(&node, line, buff);
    }
    fclose(monty_f);
    return (EXIT_SUCCESS);
}
