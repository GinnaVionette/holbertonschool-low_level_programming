#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - makes new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: a
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;

	a = malloc(sizeof(dog_t));
	if (a == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(a);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(a);
		free(name);
		return (NULL);
	}
	a->name = name;
	a->age = age;
	a->owner = owner;
	return (a);
}
