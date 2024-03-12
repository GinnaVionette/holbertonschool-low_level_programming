#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function given as parameter on element of array
 * @array: the array
 * @size: size of array
 * @action: pointer of function
 *
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (action != NULL && array != NULL)
	{
		for (n = 0; n < size; n++)
			action(array[n]);
	}
}
