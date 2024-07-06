#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Return: EXIT_SUCESS
 */

int main(int argc, char *argv[])
{
	int index = 0;

	while (argv[index] != argv[argc])
	{
		printf("%s\n", argv[index]);
		index++;
	}

return (EXIT_SUCCESS);
}
