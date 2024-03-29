#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name
 * @name: name to print
 * @f: pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
