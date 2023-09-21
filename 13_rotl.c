#include "monty.h"

/**
 * rotl - rotate the stack to the top
 * @stack: A pointer to the pointer to the stack
 * @line_num: The current line number being processed
 *
 * Return: Nothing
 */
void rotl(stack_t **stack, unsigned int line_num)
{
stack_t *temp1;
stack_t *temp2;

UNUSED(stack);
UNUSED(line_num);

if (args->stack_len < 2)
{
return;
}

temp1 = args->head;
temp2 = temp1->next;
args->head = temp2;

while (temp2)
{
if (temp2->next == NULL)
{
temp2->next = temp1;
temp1->next = NULL;
temp1->prev = temp2;
break;
}

temp2 = temp2->next;
}
}
