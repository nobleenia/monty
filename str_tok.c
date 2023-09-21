#include "monty.h"

/**
 * str_tok - Tokenize a line of text and store the words.
 *
 * Return: nothing
 */
void str_tok(void)
{
int n = 0;
char *delimiter = " \n";
char *word = NULL;
char *copy_line = NULL;

copy_line = malloc(sizeof(char) * (strlen(args->line) + 1));
if (copy_line == NULL)
{
dprintf(2, "Error: malloc failed\n");
free_args();
exit(EXIT_FAILURE);
}

strcpy(copy_line, args->line);
args->num_words = 0;
word = strtok(copy_line, delimiter);

while (word != NULL)
{
args->num_words += 1;
word = strtok(NULL, delimiter);
}

args->words = malloc(sizeof(char *) * (args->num_words + 1));
if (args->words == NULL)
{
dprintf(2, "Error: malloc failed\n");
free_args();
exit(EXIT_FAILURE);
}

strcpy(copy_line, args->line);
word = strtok(copy_line, delimiter);
n = 0;

while (word != NULL)
{
args->words[n] = malloc(sizeof(char) * (strlen(word) + 1));
if (args->words[n] == NULL)
{
dprintf(2, "Error: malloc failed\n");
free_args();
exit(EXIT_FAILURE);
}
strcpy(args->words[n], word);
word = strtok(NULL, delimiter);
n++;
}

args->words[n] = NULL;
free(copy_line);
}
