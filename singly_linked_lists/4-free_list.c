#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees a list
 * @head: header pointer
 */

void free_list(list_t *head)
{
	list_t *currentNode = head;
	list_t *tempNode;

	while (currentNode != NULL)
	{
		tempNode = currentNode->next; /** Save the next node */
		free(currentNode->str);
		free(currentNode); /** Free the current node */
		currentNode = tempNode; /** Move to the next node */
	}
}
