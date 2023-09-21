#include "monty.h"

/**
 * pall - Print all elements of the stack.
 * @stack: A pointer to the pointer to the stack
 * @line_num: The current line number being processed
 *
 * Return: Nothing
 */
void pall(stack_t **stack, unsigned int line_num)
{
stack_t *temp;

if (args->head == NULL)
{
return;
}

UNUSED(stack);
UNUSED(line_num);

temp = args->head;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}
