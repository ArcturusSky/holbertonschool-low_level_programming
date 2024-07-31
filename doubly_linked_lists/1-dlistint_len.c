#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Count all the elements of a doubly linked list
 * @h: a pointer to the head of the list to be printed.
 *
 * Return: The number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
	const dlistint_t *currentNode = h;
		while (currentNode != NULL)
		{
			count++;
			currentNode = currentNode->next;
		}
	}

return (count);
}
