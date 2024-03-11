#include "main.c"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct dog - dog data
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dpg
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
