#include "monty.h"

/**
 * free_words - frees the allocated memory for tokens.
 */

void free_words(void)
{
int n = 0;

if (args->words == NULL)
{
return;
}
while (args->words[n])
{
free(args->words[n]);
n++;
}
free(args->words);
args->words = NULL;
}
