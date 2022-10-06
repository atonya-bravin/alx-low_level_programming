#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * Description: "allocates memory using the malloc function
 * returns the pointer to the allocated memory"
 *
 * @b: the number of bytes to allocate
 *
 * Return: memory allocated pointer (success)
 */

void *malloc_checked(unsigned int b)
{
	int *space_pointer;
	
	space_pointer = malloc(b);
	
	if (space_pointer == NULL)
		exit(98);
	else
		return(space_pointer);
}
