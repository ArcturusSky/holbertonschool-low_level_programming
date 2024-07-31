#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - get node in a specific index in a doubly linked list
 * @head: pointer to the head of the list
 * @index: emplacement of the node
 *
 * Return: node or NULL if NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int increasing_index = 0;	/**Set a temporary index to keep track */

	if (head == NULL)
	{
		return (NULL);					/** return an error */
	}
	else
	{

	dlistint_t *currentNode = head;

	if (increasing_index == index)		/** means index is 0 then return head */
	{
		return (currentNode);
	}									/** Set a temporary node to hold the head pointer to traverse */
	while (currentNode->next != NULL)
										/** Iterrate until While not reaching index  or null */
	{
		currentNode = currentNode->next;
		increasing_index++;
		if (increasing_index == index)
		{
			return (currentNode);		/** If index found return current Node */
		}
	}
	}
return (NULL);
}
