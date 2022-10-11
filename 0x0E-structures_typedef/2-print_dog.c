#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: the dog structure
 *
 * Return: Always Nothing
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL || d->age == '0' || d->owner == NULL)
		printf("Name: (nil)");
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
