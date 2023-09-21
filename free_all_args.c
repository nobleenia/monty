#include "monty.h"

/**
 * free_all_args - frees all allocated memory and closes the file stream
 *
 * Return: nothing
 */
void free_all_args(void)
{
if (args->stream == NULL)
{
return;
}

fclose(args->stream);
args->stream = NULL;
free_words();
free_args();
}
