#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Function that return the summ of all its arguments
 * @n: number of arguments
 *
 * Return: Sum of arguments OR 0 if n ==0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int index = 0;
	va_list nums_to_add;

	if (n == 0)
	{
		return (0);
	}

	va_start(nums_to_add, n);

	while (index != n)
	{
		sum += va_arg(nums_to_add, unsigned int);
		/** Reminder: += means sum = sum + blabla */
		index++;
	}
	va_end(nums_to_add);

	return (sum);
}
