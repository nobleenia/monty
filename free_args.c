#include "monty.h"

/**
 * free_args - Free memory associated with the 'args' structure.
 *
 * Return: nothing
 */
void free_args()
{
if (args == NULL)
{
return;
}

if (args->instruction)
{
free(args->instruction);
args->instruction = NULL;
}

if (args->head)
{
free_stack(args->head);
args->head = NULL;
}

if (args->line)
{
free(args->line);
args->line = NULL;
}

free(args);
}
