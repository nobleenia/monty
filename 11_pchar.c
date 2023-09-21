#include "monty.h"

/**
 * pchar - print the character corresponding to the ASCII value of the top element
 * @stack: a pointer to the pointer to the stack
 * @line_num: current line number being processed
 *
 * Return: nothing
 */
void pchar(stack_t **stack, unsigned int line_num)
{
stack_t *temp;

UNUSED(stack);

if (args->head == NULL)
{
dprintf(2, "L%d: can't pchar, stack empty\n", line_num);
free_all_args();
exit(EXIT_FAILURE);
}

temp = args->head;

if (temp->n < 0 || temp->n > 127)
{
dprintf(2, "L%d: can't pchar, value out of range\n", line_num);
free_all_args();
exit(EXIT_FAILURE);
}

printf("%c\n", temp->n);
}
