#ifndef POPPY
#define POPPY

/**
 * struct dog - structure that corries all dog's intormation
 *
 * @name: dog name
 * @age: dog age
 * @owner: name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
