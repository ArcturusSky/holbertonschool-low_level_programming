#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
	/** Utilitary function that prints a single character. */

size_t print_list(const list_t *h);
	/** Function that prints all the elements of a list_t*/

size_t list_len(const list_t *h);
	/** Function that returns the number of elements in a linked list_t */

#endif
