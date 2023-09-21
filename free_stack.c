#include "monty.h"

/**
 * free_stack - free the memory allocated for a stack
 * @head: pointer to the head of the stack
 *
 * Return: nothing
 */
void free_stack(stack_t *head)
{
if (head == NULL)
{
return;
}

if (head->next != NULL)
{
free_stack(head->next);
}

free(head);
}
