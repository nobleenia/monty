#include "monty.h"

/**
 * get_stream - open and associate a file with a stream
 * @file: name of the file to open
 *
 * Return: nothing
 */
void get_stream(char *file)
{
int fd;

fd = open(file, O_RDONLY);

if (fd == -1)
{
dprintf(2, "Error: Can't open file %s\n", file);
free_args();
exit(EXIT_FAILURE);
}

args->stream = fdopen(fd, "r");
if (args->stream == NULL)
{
close(fd);
dprintf(2, "Error: Can't open file %s\n", file);
free_args();
exit(EXIT_FAILURE);
}
}
