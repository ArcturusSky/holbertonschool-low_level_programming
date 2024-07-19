#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that print all giver numbers
 * @separator: string to be printed between numbers
 * @n: number of arguments to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int index = 0;
	va_list PrintNUMBERSlist;

	va_start(PrintNUMBERSlist, n);


	while (index != n)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(PrintNUMBERSlist, unsigned int));
			index++;
		}

		else
		{
			printf("%d", va_arg(PrintNUMBERSlist, unsigned int));
			index++;
			if (index != n)
			{
				printf("%s", separator);
			}
		}

	}
	printf("\n");

	va_end(PrintNUMBERSlist);
}
