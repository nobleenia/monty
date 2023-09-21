#include "monty.h"

/**
 * rotr - Rotate the stack to the bottom
 * @stack: pointer to the pointer to the stack
 * @line_num: The current line number being processed
 *
 * Return: 0
 */
void rotr(stack_t **stack, unsigned int line_num)
{
stack_t *temp;
stack_t *bottom;

UNUSED(stack);
UNUSED(line_num);

if (args->stack_len < 2)
{
return;
}

temp = args->head;

while (temp)
{
if (temp->next == NULL)
{
bottom = temp;
break;
}

temp = temp->next;
}

bottom->prev->next = NULL;
bottom->next = args->head;
bottom->prev = NULL;

args->head = bottom;
}
