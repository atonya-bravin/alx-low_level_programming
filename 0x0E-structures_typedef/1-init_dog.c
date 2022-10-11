#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: the dog structure
 * @name: the dog name
 * @age: the dog age
 * @owner: the owner name
 *
 * Return: Always Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
