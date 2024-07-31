#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function that add a node at the beginning of a dlistint_t
 * @head: pointer to the pointer to the beginning of the linked list
 * @n: value to add
 *
 * Return: the address of the new elements, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *New_Node;
			/** Allocate memory for the new */
	New_Node = malloc(sizeof(dlistint_t));
			/** Check if memory allocation was successful */
	if (New_Node == NULL)
	{
		return (NULL);
	}

	New_Node->n = n;

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
		(*head)->prev = New_Node;
				/** Set the head prev node to new node */
		New_Node->next = *head;
				/** Set the next node pointer to head */
		New_Node->prev = NULL;
				/** Set the prev node pointer to NULL since first node */
		*head = New_Node;
				/** Update the head pointer to point to the new node and become head */
	}
	return (New_Node);
}
