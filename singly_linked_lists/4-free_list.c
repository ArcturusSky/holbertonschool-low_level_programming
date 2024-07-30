#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees a list
 * @head: header pointer
 */

void free_list(list_t *head)
{
	free(head);
}
