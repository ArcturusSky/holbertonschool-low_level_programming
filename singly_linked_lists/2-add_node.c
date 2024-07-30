#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Fonction permettant connaître la taill d'une string
 * @s: string à compter
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
 * add_node - function that add a node at the beginning of a list_t
 * @head: pointer to the pointer to the beginning of the linked list
 * @str: value to add
 *
 * Return: the address of the new elements, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *Duplicate_of_str;
	list_t *newNode;

			/** Allocate memory for the new */
	newNode = malloc(sizeof(list_t));

			/** Check if memory allocation was successful */
	if (newNode == NULL)
	{
		return (NULL);
	}

	Duplicate_of_str = strdup(str);
			/** Duplicate str into duplicate_string */
	if (Duplicate_of_str == NULL)
	{
		free(newNode);
			/** Free the node if string duplication fails */
		return (NULL);
	}
	
	newNode->str = Duplicate_of_str;
			/** Set the duplicate string into the str data in the new node  */
	newNode->len = _strlen(Duplicate_of_str);
			/** Set the lenght into the len data in the new node  */

	if (*head == NULL)
			/** Case 1: empty list */
	{
		*head = newNode;
			/** New node become the head and only node */
		newNode->next = NULL;
			/** Since only node, next is NULL */
	}
	else
			/** Case 2: not empty list */
	{
	newNode->next = *head;
			/** Set the next node pointer to head */
	}

	*head = newNode;
			/** Update the head pointer to point to the new node and become de header */

	return (newNode);
}
