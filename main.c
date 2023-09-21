#include "monty.h"

filein_t *args = NULL;

/**
 * main - entry point for the monty interpreter
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 *
 * Return: 0 on successful execution, or an error code on failure
 */
int main(int argc, char *argv[])
{
size_t n = 0;
stack_t *stack = NULL;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

args = malloc(sizeof(filein_t));
if (args == NULL)
{
dprintf(2, "Error: malloc failed\n");
free_args();
exit(EXIT_FAILURE);
}

args->instruction = malloc(sizeof(instruction_t));
if (args->instruction == NULL)
{
dprintf(2, "Error: malloc failed\n");
free_args();
exit(EXIT_FAILURE);
}
args->stream = NULL;
args->head = NULL;
args->line = NULL;
args->num_words = 0;
args->line_number = 0;
args->stack_len = 0;
args->stack = 1;

get_stream(argv[1]);

while (getline(&args->line, &n, args->stream) != -1)
{
args->line_number += 1;
str_tok();
get_function();

if (args->num_words != 0)
{
args->instruction->f(&stack, args->line_number);
}
free_words();
}

if (args->stream != NULL)
{
fclose(args->stream);
args->stream = NULL;
}

free_args();

return (0);
}
