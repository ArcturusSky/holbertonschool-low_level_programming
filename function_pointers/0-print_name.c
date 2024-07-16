#include "function_pointers.h"

/**
 * print_name - Function that print name
 * @name: Name to print
 * @f: function pointed at for the format
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
	{
	f(name);
	}
