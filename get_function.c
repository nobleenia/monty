#include "monty.h"

/**
 * get_function - gets the corresponding function for the opcode.
 *
 * Return: nothing
 */
void get_function(void)
{
int n = 0;
instruction_t instructions[] = {
{"push", &push}, {"pall", &pall},
{"pint", &pint}, {"pop", &pop},
{"swap", &swap}, {"add", &add},
{"nop", &nop}, {"sub", &sub},
{"div", &div_}, {"mul", &mul},
{"mod", &mod}, {"pchar", &pchar},
{"pstr", &pstr}, {"rotl", &rotl},
{"rotr", &rotr}, {"stack", &stack},
{"queue", &queue}, {NULL, NULL}
};

if (args->num_words == 0)
{
return;
}

if (args->words[0][0] == '#')
{
args->instruction->opcode = "nop";
args->instruction->f = nop;
return;
}

for (; instructions[n].opcode != NULL; n++)
{
if (strcmp(instructions[n].opcode, args->words[0]) == 0)
{
args->instruction->opcode = instructions[n].opcode;
args->instruction->f = instructions[n].f;
return;
}
}

dprintf(2, "L%d: unknown instruction %s\n", args->line_number, args->words[0]);
free_all_args();
exit(EXIT_FAILURE);
}
