#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Function to count a string lenght
 * @s: string to count
 * Return: lengh
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')

	/**
	 * Permet de traverser le array vers lequel point s
	 * "*s" désigne littéralement ce tableau je n'ai pas besoin de
	 * de son adresse mémoire avec p = &s ou autre.
	 */
	{
		count++;
		s++;
	}

	return (count);
}

/**
 * add_node_end - Function that add a node at the end of a list_t
 * @head: pointer to the head of the list
 * @str: string to add
 *
 * Return: newNode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *Duplicate_string; /** Declare a new variable to hold the duplicate */
	/** Allocate memory to create a new node */
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL) /** if allocation fail return NULL */
	{
		return (NULL); /** return an error */
	}
	else
	{
	Duplicate_string = strdup(str); /** Duplicate str into duplicate_string */

	if (Duplicate_string == NULL)
	{
			free(newNode);
				/** Free the node if string duplication fails */
			return (NULL);
	}
		newNode->str = Duplicate_string;
		/** Set the duplicate string into the str data in the new node  */
		newNode->len = _strlen(Duplicate_string);
		/** Set the lenght into the len data in the new node  */

		newNode->next = NULL; /** since adding at the end, next node is NULL */
	}
	if (*head == NULL) /** Case 1: empty list */
	{
		*head = newNode; /** New node become the head and only node */
	}
	else /** Case 2: not empty list */
	{
		list_t *currentNode = *head;
		/** Set a temporary node to hold the head pointer to traverse */

		while (currentNode->next != NULL) /** While not reaching Penultimate node */
		{
			currentNode = currentNode->next;
		}
	currentNode->next = newNode; /** when reached setting newNode */
	}

return (newNode);
}
