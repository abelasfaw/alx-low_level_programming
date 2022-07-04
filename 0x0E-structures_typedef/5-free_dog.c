#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memoy allocated for struct dog
 * @d: pointer to allocated memory
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
