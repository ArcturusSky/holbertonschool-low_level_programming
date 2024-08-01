#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a node in a index in a doubly linked list
 * @h: pointer to the head of the list
 * @idx: emplacement of the node
 * @n: value of the new node
 *
 * Return: node or NULL if NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int increasing_index;	/**Set a temporary index to keep track */
	dlistint_t *currentNode = *h;
	dlistint_t *New_Node;
	dlistint_t *Temporary_Prev_Node;

	if (h == NULL)	/* Check for invalid head pointer */
		return (NULL);

	if (idx == 0)	/* Special case: Inserting at the head */
		return (add_dnodeint(h, n));

	for (increasing_index = 0; increasing_index < idx
	&& currentNode != NULL; increasing_index++)
		/** Move to the next node */
		Temporary_Prev_Node = currentNode;
		currentNode = currentNode->next;
	}
			/** Special case: Inserting at the end of the list */
	if (currentNode->next == NULL)
		return (add_dnodeint_end(&*h, n));

	if (increasing_index == idx)	/** Allocate memory for new node */
	{
		New_Node = malloc(sizeof(dlistint_t));
		if (New_Node == NULL)
			return (NULL);

		/** Update pointers for insertion */
		New_Node->n = n;
		New_Node->prev = Temporary_Prev_Node;
		New_Node->next = currentNode;
		Temporary_Prev_Node->next = New_Node;
		currentNode->prev = New_Node;

		/** If index found return current Node */
		return (New_Node);
	}
	return (NULL);	/** If index is out of bounds, return NULL */

}
