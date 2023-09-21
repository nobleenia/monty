#include "monty.h"

/**
 * pop - remove the top element from the stack
 * @stack: pointer to the pointer to the stack
 * @line_num: current line number being processed
 *
 * Return: nothing
 */
void pop(stack_t **stack, unsigned int line_num)
{
UNUSED(stack);

if (args->head == NULL)
{
dprintf(2, "L%d: can't pop an empty stack\n", line_num);
free_all_args();
exit(EXIT_FAILURE);
}

del_stack_node();
args->stack_len -= 1;
}
