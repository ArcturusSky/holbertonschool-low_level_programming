#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Add a node at the end of a doubly linked list
 * @head: pointer to the head of the list
 * @n: value to add
 *
 * Return: New_Node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	/** Allocate memory to create a new node */
	dlistint_t *New_Node = malloc(sizeof(dlistint_t));

	if (New_Node == NULL)		/** if allocation fail return NULL */
	{
		return (NULL);			/** return an error */
	}
	else
	{
		/** Case 1: empty list */
		if (*head == NULL)

		{
			New_Node->prev = NULL;
			New_Node->next = NULL;
								/** Since only node, prev and next are NULL */
			*head = New_Node;
								/** New node become the head and only node */
		}

		/** Case 2: not empty list */
		else
		{
			dlistint_t *currentNode = *head;
												/** Set a temporary node to hold the head pointer to traverse */

			while (currentNode->next != NULL)	/** While not reaching Penultimate node */
			{
				currentNode = currentNode->next;
			}
		New_Node->n = n;						/** Set value */
		New_Node->prev = currentNode;			/** Set the prev node of new node */
		New_Node->next = NULL;					/** Set next to Null since last node */
		currentNode->next = New_Node;			/** Setting New_Node */
		}
	}
return (New_Node);
}
