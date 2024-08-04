#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a given index.
 * @n: The number to examine.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at index, or -1 if index is out of range.
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) | (*b - '0');
		b++;
	}

	return (result);

}