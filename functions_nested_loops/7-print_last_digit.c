#include "main.h"
/**
* print_last_digit - Last digit of n
* @n: the number to pick the last digit from
*
* Description: function to pick up last digit of n
* Return: the last digit of n
*/

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar ('0' + n);
	return (n);
}
