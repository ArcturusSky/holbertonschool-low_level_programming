#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
	/** Function that does an operation of "a" and "b" */

int op_sub(int a, int b);
	/** Function that does a substraction of "a" and "b" */

int op_mul(int a, int b);
	/** Function that does a multiplication of "a" and "b" */

int op_div(int a, int b);
	/** Function that does a division of "a" and "b" */

int op_mod(int a, int b);
	/** Function that return the remainder of a division of "a" and "b" */

int (*get_op_func(char *s))(int, int);
	/** Function to get an operator*/

#endif
