#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * dlistint_len - return number of elements in list
 * @h: pointer to list
 * Return: amount of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count_node = 0;

	while (h != NULL)
	{
		h = h->next;
		count_node++;
	}
	return (count_node);
}
