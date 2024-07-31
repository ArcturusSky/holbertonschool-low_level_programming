#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>

#define EMPTY_LIST_RETURN_NULL
(
	/ if (h == NULL)
	/ {
	/	return (NULL);					/** return an error */
	/ }
)
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
	/** Function that prints all elements of a doubly linked list */

size_t dlistint_len(const dlistint_t *h);
	/** Function that counts all elements of a doubly linked list */

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
	/** Function that adds a new node at the beginning of a doubly linked list. */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
	/** Function that adds a new node at the end of a doubly linked list. */

void free_dlistint(dlistint_t *head);
	/** Function that frees a doubly linked list */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
	/** Funtion that returns the "nth" node of a doubly linked list. */

int sum_dlistint(dlistint_t *head);
	/** Function that returns the sum of all "n" data of a doubly linked list. */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
	/** Function that inserts a new node at a given position */

#endif
