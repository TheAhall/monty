#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <stdarg.h>
#define _GNU_SOURCE

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
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
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);

/*Errors*/
void error_func_1(int error_code, ...);
void error_func_2(int error_code, ...);
void error_func_str(int error_code, ...);

/*functions 1*/
void add_to_stack(stack_t **new_node, __attribute__((unused))unsigned int ln);
void print_stack(stack_t **stack, unsigned int line_number);
void pop_top(stack_t **stack, unsigned int line_number);
void print_top(stack_t **stack, unsigned int line_number);

/*functions 2*/
stack_t *create_node(int n);
void free_nodes(void);
void add_to_queue(stack_t **new_node, __attribute__((unused))unsigned int ln);

/*functions 3*/
void nop(stack_t **stack, unsigned int line_number);
void swap_nodes(stack_t **stack, unsigned int line_number);
void add_nodes(stack_t **stack, unsigned int line_number);
void sub_nodes(stack_t **stack, unsigned int line_number);

/*operations*/
void mul_nodes(stack_t **stack, unsigned int line_number);
void mod_nodes(stack_t **stack, unsigned int line_number);
void div_nodes(stack_t **stack, unsigned int line_number);

/*strings*/
void print_char(stack_t **stack, unsigned int line_number);
void print_str(stack_t **stack, __attribute__((unused))unsigned int ln);
void rotl(stack_t **stack, __attribute__((unused))unsigned int ln);
void rotr(stack_t **stack, __attribute__((unused))unsigned int ln);

/*file tools*/
void open_file(char *file_name);

#endif
