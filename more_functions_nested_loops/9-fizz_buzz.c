#include <stdio.h>
#include "main.h"
/**
 * main - This is the entry point of the code
 * Return: 0 Successful
 */

int main(void)
{
	int nombre;

		for (nombre = 1; nombre <= 100; nombre++)
		{
			if (nombre % 3 == 0 && nombre % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (nombre % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (nombre % 5 == 0)
			{
				printf("Buzz ");
			}
			else if (nombre == 100)
			{
				printf("Buzz");
			}
			else
			printf("%d ", nombre);
		}

		putchar('\n');
return (0);
}
