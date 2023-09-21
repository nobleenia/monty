#include "monty.h"

/**
 * mod - computes the remainder of the second-top element by the top element
 * @stack: pointer to the pointer to the stack
 * @line_num: current line number being processed
 *
 * Return: nothing
 */
void mod(stack_t **stack, unsigned int line_num)
{
stack_t *temp1;
stack_t *temp2;

UNUSED(stack);

if (args->stack_len < 2)
{
dprintf(2, "L%d: can't mod, stack too short\n", line_num);
free_all_args();
exit(EXIT_FAILURE);
}

temp1 = args->head;
temp2 = temp1->next;

if (temp1->n == 0)
{
dprintf(2, "L%d: division by zero\n", line_num);
free_all_args();
exit(EXIT_FAILURE);
}
temp2->n = temp2->n % temp1->n;
del_stack_node();

args->stack_len -= 1;
}
