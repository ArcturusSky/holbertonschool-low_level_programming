#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Function that print everything
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list PrintAnything;
	int index = 0;
	char *TestString;

	va_start(PrintAnything, format);

	while (format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(PrintAnything, int));
				break;
			case 'i':
				printf("%d", va_arg(PrintAnything, int));
				break;
			case 'f':
				printf("%f", va_arg(PrintAnything, double));
				break;
			case 's':
				TestString = va_arg(PrintAnything, char *);
				if (TestString == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", TestString);
				break;
			default:
				break;
		}
		index++;
	}
	printf("\n");
}
