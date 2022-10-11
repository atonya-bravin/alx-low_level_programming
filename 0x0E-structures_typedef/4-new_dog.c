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
	int character_counter;

	new_doggy = malloc(sizeof(dog_t));

	if (new_doggy == NULL)
		return (NULL);

	new_doggy->name = malloc((sizeof(name)) + 1);
	if (new_doggy->name == NULL)
	{
		free(new_doggy);
		return (NULL);
	}
	new_doggy->owner = malloc((sizeof(owner)) + 1);
	if (new_doggy->owner == NULL)
	{
		free(new_doggy->name);
		free(new_doggy);
		return (NULL);
	}

	for (character_counter = 0; name[character_counter] != '\0';
			character_counter++)
		new_doggy->name[character_counter] = name[character_counter];
	new_doggy->name[character_counter] = '\0';
	new_doggy->age = age;
	for (character_counter = 0; owner[character_counter] != '\0';
			character_counter++)
		new_doggy->owner[character_counter] = owner[character_counter];
	new_doggy->owner[character_counter] = '\0';
	return (new_doggy);
}
