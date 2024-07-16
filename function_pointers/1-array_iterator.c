#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Function that execute a function given as
 * a parameter on each elements of an array.
 * @array: pointer to a given array
 * @size: size of the array
 * @action: function to execute on the element
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t IndexArray = 0;

	while (IndexArray != size)
	{
		action(array[IndexArray]);
		IndexArray++;
	}
return;

}
