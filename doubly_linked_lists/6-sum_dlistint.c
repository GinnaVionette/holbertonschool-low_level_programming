#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_dlistint - sum of all data in linked list
 * @head: pointer to head
 * Return: sum of data, return 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int add_result = 0;

	while (head != NULL)
	{
		add_result += head->n;
		head = head->next;
	}
	return (add_result);
}
