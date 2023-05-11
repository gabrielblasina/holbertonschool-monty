#include "monty.h"

int main(int argc, char **argv)
{
    char *buff = NULL, *opcode = NULL;
    size_t buffsize = 0;
    
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
    while (getline(&buff, &buffsize, monty_f) != -1)
    {
        int line = 0;

        line ++;
        opcode = strtok(buff, " \n\t");
    
        if (strcmp(opcode, "push") == 0)
        {
            fprintf(stdout, "%s\n", opcode);
        }
    }


    fclose(monty_f);
    return (EXIT_SUCCESS);
}
