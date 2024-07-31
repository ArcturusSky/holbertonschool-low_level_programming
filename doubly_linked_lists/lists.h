#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>

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

#endif
