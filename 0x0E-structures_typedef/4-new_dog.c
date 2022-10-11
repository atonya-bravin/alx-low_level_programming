#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Return: New_dog_struct (success) NULL (fail)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doggy;
	int character_counter = 0;

	new_doggy = malloc(sizeof(dog_t));

	if (new_doggy == NULL)
	{
		free(new_doggy);
		return (NULL);
	}

	new_doggy->name = malloc((sizeof(name)) + 1);
	new_doggy->owner = malloc((sizeof(owner)) + 1);

	for (; name[character_counter] != '\0'; character_counter++)
		new_doggy->name[character_counter] = name[character_counter];
	new_doggy->name[character_counter] = '\0';
	character_counter = 0;
	new_doggy->age = age;
	for (; owner[character_counter] != '\0'; character_counter++)
		new_doggy->owner[character_counter] = owner[character_counter];
	new_doggy->owner[character_counter] = '\0';
	return (new_doggy);
}
