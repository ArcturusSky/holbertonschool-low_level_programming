#include <stdio.h>

/**
 * main - This is the entry point of my code
 * Return: 0 Successful
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(unsigned long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(double));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
