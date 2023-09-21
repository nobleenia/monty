#include "monty.h"

/**
 * sub - subtracts the top element from the second-top element of the stack
 * @stack: a pointer to the pointer to the stack
 * @line_num: the current line number being processed
 */
void sub(stack_t **stack, unsigned int line_num)
{
stack_t *temp1;
stack_t *temp2;

UNUSED(stack);

if (args->stack_len < 2)
{
dprintf(2, "L%d: can't sub, stack too short\n", line_num);
free_all_args();
exit(EXIT_FAILURE);
}

temp1 = args->head;
temp2 = temp1->next;
temp2->n = temp2->n - temp1->n;
del_stack_node();

args->stack_len -= 1;
}
