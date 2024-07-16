#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Array to go through
 * @size: number of element in the array
 * @cmp: pointer to a function to be used to compare value
 *
 * Return: Return int_index or -1 if 0 or fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0 || array == NULL || *cmp == NULL)
	{
		return (-1);
	}

	while (index != size)
	{
		cmp(array[index]);
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
		index++;
	}

	return (-1);

}
