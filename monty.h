#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stddef.h>

#define UNUSED(x) (void)(x)

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct filein_s - file input related data
 * @stream: file stream
 * @line: line from the file
 * @line_number: current line number
 * @words: array of words from the line
 * @num_words: number of words in the line
 * @instruction: pointer to instruction
 * @head: pointer to the head of the stack
 * @stack_len: length of the stack
 * @stack: flag to indicate stack mode
 *
 * Description: structure to manage file input and stack data
 */
typedef struct filein_s
{
    FILE *stream;
    char *line;
    unsigned int line_number;
    char **words;
    int num_words;
    instruction_t *instruction;
    stack_t *head;
    int stack_len;
    int stack;
} filein_t;

extern filein_t *args;

int main(int argc, char *argv[]);

void val_args(int argc);
void init_args(void);
void malloc_fail(void);
void get_stream(char *file);
void str_tok(void);
void get_function(void);
void run_function(void);

int is_num(char *str);
void free_stack(stack_t *head);
void free_args(void);
void free_all_args(void);
void del_stack_node(void);
void free_words(void);
void close_stream(void);

void push(stack_t **stack, unsigned int line_num);
void pall(stack_t **stack, unsigned int line_num);
void pint(stack_t **stack, unsigned int line_num);
void pop(stack_t **stack, unsigned int line_num);
void swap(stack_t **stack, unsigned int line_num);
void add(stack_t **stack, unsigned int line_num);
void nop(stack_t **stack, unsigned int line_num);
void sub(stack_t **stack, unsigned int line_num);
void div_(stack_t **stack, unsigned int line_num);
void mul(stack_t **stack, unsigned int line_num);
void mod(stack_t **stack, unsigned int line_num);
void comments(stack_t **stack, unsigned int line_num);
void pchar(stack_t **stack, unsigned int line_num);
void pstr(stack_t **stack, unsigned int line_num);
void rotl(stack_t **stack, unsigned int line_num);
void rotr(stack_t **stack, unsigned int line_num);
void stack(stack_t **stack, unsigned int line_num);
void queue(stack_t **stack, unsigned int line_num);

int dprintf(int fd, const char *format, ...);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
FILE *fdopen(int fd, const char *mode);

#endif
