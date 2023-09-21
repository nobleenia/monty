#include "monty.h"

/**
 * pstr - prints the string of characters from the stack
 * @stack: pointer to the pointer to the stack
 * @line_num: The current line number being processed
 *
 * Return: nothing
 */
void pstr(stack_t **stack, unsigned int line_num)
{
stack_t *temp;

UNUSED(stack);
UNUSED(line_num);

temp = args->head;

while (temp != NULL)
{
if (temp->n <= 0 || temp->n > 127)
{
break;
}
printf("%c", temp->n);
temp = temp->next;
}
printf("\n");
}
