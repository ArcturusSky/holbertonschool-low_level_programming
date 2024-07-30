#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: a pointer to the head of the list to be printed.
 *
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
	const list_t *currentNode = h;
		while (currentNode != NULL)
		{
			if (currentNode->str == NULL)
			{
				printf("[0] (nil)\n");
				count++;
				currentNode = currentNode->next;
			}
			else
			{
				printf("[%d] -> %s\n", currentNode->len, currentNode->str);
				count++;
				currentNode = currentNode->next;
			}
		}
	}

return (count);
}
