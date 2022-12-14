#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory space of the dog structure
 *
 * @d: the dog structure
 *
 * Return: Always Nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
