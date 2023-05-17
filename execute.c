#include "monty.h"
/**
 * execute - function to call opcode function
 * @opcode: name of the function to look for
 * Return: function
*/
void (*execute(char *opcode))(stack_t **stack, unsigned int line_number)
{
	instruction_t fselect[] = {
		{"push", _push},
		{"pop", _pop},
		{"pall", _pall},
		{"pint", _pint},
		{"nop", _nop},
		{"add", _add},
		{NULL, NULL}
	};
	int x;

	for (x = 0; fselect[x].opcode != NULL; x++)
	{
		if (strcmp(opcode, fselect[x].opcode) == 0)
		{
			return (fselect[x].f);
		}
	}
	return (NULL);
}
