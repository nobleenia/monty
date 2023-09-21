#include "monty.h"

/**
 * add - Add the top two elements of the stack
 * 
 * Return: 0
 */
void add(stack_t **stack, unsigned int line_num)
{
stack_t *temp1;
stack_t *temp2;

UNUSED(stack);

if (args->stack_len < 2)
{
printf(2, "L%d: can't add, stack too short\n", line_num);
free_all_args();
exit(EXIT_FAILURE);
}

temp1 = args->head;
temp2 = temp1->next;
temp2->n = temp1->n + temp2->n;
del_stack_node();

args->stack_len -= 1;
}
