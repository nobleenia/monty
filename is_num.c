#include "monty.h"

/**
 * is_num - checks if a string represents a valid integer
 * @str: string to check.
 *
 * Return: 1 if `str` is a valid integer, 0 otherwise.
 */
int is_num(char *str)
{
int n = 0;

while (str[n])
{
if (n == 0 && str[n] == '-' && str[n + 1])
{
n++;
continue;
}
if (str[n] < '0' || str[n] > '9')
{
return (0);
}
n++;
}
return (1);
}
