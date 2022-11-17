#include <stdio.h>

int main(int ac, char **av)
{
	int argument_counter = 0;

	for (; av[argument_counter] != NULL; argument_counter++)
		printf("%s\n",av[argument_counter]);
	return (0);
}
