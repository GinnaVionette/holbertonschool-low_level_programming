#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
