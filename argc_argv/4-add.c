#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: arguments counts
 * @argv: arguments vector
 *
 * Return: EXIT_SUCCESS or 1
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int index = 1;

/** To return 0 if 0 parameters has been sent */
	if (argc == 1)
	{
		printf("0\n");
		return (EXIT_SUCCESS);
	}

/** Start the external loop to go through each argv*/
		while (index < argc)
		{
			/** Initialize an inside index to go through each chracter IN each argv */
			int char_index = 0;

			/**
			 * Start the internal loop to go through each
			 * characters of the given argv
			 */
			while (argv[index][char_index] != '\0')

			{
				/** Test if each chracter of the given arg is a digit */
				if (!isdigit(argv[index][char_index]))
				{
					printf("Error\n");
					return (1);
				}
				char_index++;
			}
			/** Convert the argv into an int and add it to result */
			result = result + atoi(argv[index]);
			index++;
		}
		printf("%d\n", result);
		return (EXIT_SUCCESS);
}
