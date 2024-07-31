#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Function that frees a list
 * @head: header pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode = head;
	dlistint_t *tempNode;

	while (currentNode != NULL)
	{
		tempNode = currentNode->next; /** Save the next node */
		free(currentNode); /** Free the current node */
		currentNode = tempNode; /** Move to the next node */
	}
}
