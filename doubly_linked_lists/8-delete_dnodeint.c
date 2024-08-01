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

	if (head == NULL)	/* Check for invalid head pointer */
		return (-1);

	while (currentNode != NULL) /* Traverse the list */
	{
		if (index == 0)
		{
			if ((*head)->next == NULL)
			{
				free(*head);	/** Free the only node */
				*head = NULL;	/** Set head to NULL, as the list is now empty */
			}
			else
			{
				currentNode = (*head)->next;
				currentNode->prev = NULL;
				(*head)->next = currentNode->next;
				if (currentNode->next != NULL) /** Ensure next node exists before accessing its prev */
					currentNode->next->prev = currentNode;
				free(*head);
				*head = currentNode;
			}
		return (1);
		}
		if (increasing_index == index)
		{
			/** Update pointers for deletion */
			Temporary_Prev_Node = currentNode->prev;
			if (currentNode->next == NULL)
			{
				Temporary_Next_Node = NULL;
			}
			else
			{
				Temporary_Next_Node = currentNode->next;
			}
			Temporary_Prev_Node->next = Temporary_Next_Node;
			Temporary_Next_Node->prev = Temporary_Prev_Node;

			/** If Success */
			free(currentNode);
			return (1);
			}

		/** Move to the next node */
		Temporary_Prev_Node = currentNode;
		currentNode = currentNode->next;
		increasing_index++;
	}
	return (-1);	/** If index is out of bounds, return NULL */

}
