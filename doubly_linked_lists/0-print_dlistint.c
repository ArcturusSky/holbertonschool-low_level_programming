#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: a pointer to the head of the list to be printed.
 *
 * Return: The number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
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
			if (currentNode->n == '\0')
			{
				printf("(nil)");
				count++;
				currentNode = currentNode->next;
			}
			else
			{
				printf("%d\n", currentNode->n);
				count++;
				currentNode = currentNode->next;
			}
		}
	}

return (count);
}
