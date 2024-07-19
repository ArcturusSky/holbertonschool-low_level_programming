#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings, followed by a new line
 * @separator: string to be printed between each strings arguments
 * @n: number of string arguments to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	va_list PrintWORDSlist;
	char *TestString;

	va_start(PrintWORDSlist, n);
	while (index != n)
	{
		if (separator == NULL)
		{
			TestString = va_arg(PrintWORDSlist, char*);
			if (TestString == NULL)
			{
				printf("(nill)");
			}
			else
			{
				printf("%s", TestString);
			}
			index++;
		}
		else
		{
			TestString = va_arg(PrintWORDSlist, char*);
			if (TestString == NULL)
			{
				printf("(nill)");
			}
			else
			{
				printf("%s", TestString);
			}
			index++;
			if (index != n)
			{
				printf("%s", separator);
			}
		}
}
	printf("\n");
	va_end(PrintWORDSlist);
}
