#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_dnodeint_at_index - return nth dode in linked list
 * @head: pointer to head
 * @index: node index
 * Return: direction of nth node, NULL if fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		counter++;
	}
	return (head);
}
