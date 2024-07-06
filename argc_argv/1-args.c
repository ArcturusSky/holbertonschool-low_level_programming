#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{

	if (*argv[0] > 1)
	{
		printf("%d\n", argc);
	}
return (EXIT_SUCCESS);
}
