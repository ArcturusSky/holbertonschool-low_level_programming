#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>


/**
 * get_op_func - Function that selects the correction function to perform
 * the operation asked by the user
 * @s: operator used by the user
 *
 * Return: the function that correspond the operator or NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i != 5)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
