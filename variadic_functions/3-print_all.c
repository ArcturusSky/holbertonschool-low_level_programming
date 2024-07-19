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
	int flagTESTSeparator = 0;

	va_start(PrintAnything, format);
	while (format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c':
				flagTESTSeparator = 1;
				printf("%c", va_arg(PrintAnything, int));
				break;
			case 'i':
				flagTESTSeparator = 1;
				printf("%d", va_arg(PrintAnything, int));
				break;
			case 'f':
				flagTESTSeparator = 1;
				printf("%f", va_arg(PrintAnything, double));
				break;
			case 's':
				flagTESTSeparator = 1;
				TestString = va_arg(PrintAnything, char *);
				if (TestString == NULL)
				{
					flagTESTSeparator = 0;
					printf("(nil)");
					break;
				}
				printf("%s", TestString);
				break;
			default:
				break;
		}
		index++;
		if (flagTESTSeparator == 1 && format[index] != 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
