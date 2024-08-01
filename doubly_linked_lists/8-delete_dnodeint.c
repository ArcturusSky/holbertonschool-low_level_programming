#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete a node at index in a doubly linked list
 * @head: pointer to the head of the list
 * @index: emplacement of the node
 *
 * Return: node or NULL if NULL
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int increasing_index = 0;	/**Set a temporary index to keep track */
	dlistint_t *currentNode = *head;
	dlistint_t *Temporary_Prev_Node;
	dlistint_t *Temporary_Next_Node;

	if (head == NULL || *head == NULL)
		return (-1);  /** Check for invalid head pointer or empty list */

	if (index == 0)  /** Special case for the head node */
	{
		currentNode = *head;
		if (currentNode->next != NULL)
		{
			*head = currentNode->next;
			(*head)->prev = NULL;
		}
		else
		{
			*head = NULL;  /** List becomes empty */
		}
		free(currentNode);
		return (1);
	}
	while (currentNode != NULL)	/** Traverse the list */
	{
		if (increasing_index == index)
		{
			Temporary_Prev_Node = currentNode->prev; /** Update pointers for deletion */
			Temporary_Next_Node = currentNode->next;
			if (Temporary_Prev_Node != NULL)
				Temporary_Prev_Node->next = Temporary_Next_Node;
			if (Temporary_Next_Node != NULL)
				Temporary_Next_Node->prev = Temporary_Prev_Node;
			free(currentNode); /** If Success */
			return (1);
			}
		currentNode = currentNode->next; /** Move to the next node */
		increasing_index++;
	}
	return (-1);	/** If index is out of bounds, return NULL */
}
