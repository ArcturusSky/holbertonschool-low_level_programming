#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - This is the entry point of the code
 * Return: 0 Successful
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    int lastDigit(int n)
    {
        return (n % 10);
    }
    if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lasDigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lasDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasDigit);
	}
    return (0);
    }