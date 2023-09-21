#include "monty.h"

/**
 * pint - print the value of the top element of the stack
 * @stack: a pointer to the pointer to the stack
 * @line_num: the current line number being processed
 *
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_num)
{
UNUSED(stack);

if (args->head == NULL)
{
dprintf(2, "L%d: can't pint, stack empty\n", line_num);
free_all_args();
exit(EXIT_FAILURE);
}

printf("%d\n", args->head->n);
}
