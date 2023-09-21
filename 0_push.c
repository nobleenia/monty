#include "monty.h"

/**
 * push - Push a new element onto the stack.
 * @stack: A pointer to the pointer to the stack.
 * @line_num: The current line number being processed.
 */
void push(stack_t **stack, unsigned int line_num)
{
stack_t *temp;
if (args->num_words <= 1 || !(is_num(args->words[1])))
{
free_args();
dprintf(2, "L%d: usage: push integer\n", line_num);
exit(EXIT_FAILURE);
}

*stack = malloc(sizeof(stack_t));
if (*stack == NULL)
{
dprintf(2, "Error: malloc failed\n");
free_args();
exit(EXIT_FAILURE);
}

(*stack)->next = (*stack)->prev = NULL;
(*stack)->n = (int)atoi(args->words[1]);

if (args->head == NULL)
{
args->head = *stack;
}
else
{
if (args->stack)
{
(*stack)->next = args->head;
args->head->prev = *stack;
args->head = *stack;
}
else
{
temp = args->head;

while (temp->next)
{
temp = temp->next;
}
temp->next = *stack;
(*stack)->prev = temp;
}
}
}
