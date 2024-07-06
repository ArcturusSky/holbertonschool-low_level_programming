#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: EXIT_SUCESS or 1
 */

int main(int argc, char *argv[])
	{
		int result;

		if (argc != 3)
		{
			printf("Error\n");
			(void)result;

			return (1);
		}
		else
		{
			int mul1 = atoi(argv[1]);
			int mul2 = atoi(argv[2]);

			result = (mul1 * mul2);
			printf("%d\n", result);
		}

			return (EXIT_SUCCESS);

	}
