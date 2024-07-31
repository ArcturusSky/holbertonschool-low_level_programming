#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - sum all "n" in doubly linked list
 * @head: pointer to the head of the list
 *
 * Return: Sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_of_data = 0;
	dlistint_t *currentNode = head;

	if (head == NULL)
	{
		return (0);
	}
	sum_of_data = currentNode->n;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
		sum_of_data += currentNode->n;
	}

return (sum_of_data);
}
