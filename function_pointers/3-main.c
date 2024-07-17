#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - entry point of my program
 * @argc: Arguments counts
 * @argv: Arguments vectors
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *op;
	int (*fonctionop)(int, int);
	int num1;
	int num2;
	int result;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	fonctionop = get_op_func(op);

	if (fonctionop == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (strcmp(op, "/") == 0 || strcmp(op, "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = fonctionop(num1, num2);

	printf("%d\n", result);
	return (0);
}
