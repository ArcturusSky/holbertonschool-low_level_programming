#include "lists.h"
#include <stdio.h>

/**
 * list_len - Function that returns the number of elements in a linked
 * @h: a pointer to the head of the list to be counted
 *
 * Return: The number of nodes in the list
 */

size_t list_len(const list_t *h)
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
				count++;
				currentNode = currentNode->next;
			}
			else
			{
				count++;
				currentNode = currentNode->next;
			}
		}
	}

return (count);
}
