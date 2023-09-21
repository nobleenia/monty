#include "monty.h"

/**
 * del_stack_node - Remove the top element from the stack
 */
void del_stack_node(void)
{
stack_t *temp;

temp = args->head;
args->head = temp->next;
free(temp);
}
