#include "monty.h"

/**
 * swap - swap the top two elements of the stack
 * @stack: A pointer to the pointer to the stack
 * @line_num: The current line number being processed
 */
void swap(stack_t **stack, unsigned int line_num)
{
stack_t *temp1;
stack_t *temp2;

UNUSED(stack);

if (args->stack_len < 2)
{
dprintf(2, "L%d: can't swap, stack too short\n", line_num);
free_all_args();
exit(EXIT_FAILURE);
}

temp1 = args->head;
temp2 = temp1->next;
temp1->next = temp2->next;
if (temp1->next)
{
temp1->next->prev = temp1;
}
temp2->next = temp1;
temp1->prev = temp2;
temp2->prev = NULL;
args->head = temp2;
}
