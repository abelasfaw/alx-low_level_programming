#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a dog struct
 * @d: struct pointer of dog to initialize
 * @name: name property
 * @age: age property
 * @owner: owner property
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(98);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
