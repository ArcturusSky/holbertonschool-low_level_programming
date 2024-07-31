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
	unsigned int increasing_index = 0;	/**Set a temporary index to keep track */
	dlistint_t *currentNode = *h;
	dlistint_t *New_Node;
	dlistint_t *Temporary_Prev_Node;

	if (h == NULL)
	{
	return (NULL);					/** return an error */
	}
	if (increasing_index == idx)		/** means index is 0 then return head */
	{
		return (add_dnodeint(&*h, n));
	}
	else
	{
		while (currentNode != NULL)	/** Iterrate */
		{
			Temporary_Prev_Node = currentNode;
			currentNode = currentNode->next;
			increasing_index++;
			if (increasing_index == idx)
			{
				if (currentNode->next == NULL)
				{
					return (add_dnodeint_end(&*h, n));
				}
				New_Node = malloc(sizeof(dlistint_t));
					if (New_Node)
					{
						return (NULL);
					}
				New_Node->n = n;
				New_Node->prev = Temporary_Prev_Node;
				New_Node->next = currentNode;
				return (New_Node);			/** If index found return current Node */
			}
		}
	}

	return (NULL);
}
