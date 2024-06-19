#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * lastD - Last digit of n
 * @n: the number to pick the last digit from
 *
 * Description: function to pick up last digit of n
 * Return: the last digit of n
 */

int lastD(int n)
	{
		return (n % 10);
	}
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

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastD(n));
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastD(n));
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD(n));
	}
	return (0);
	}
