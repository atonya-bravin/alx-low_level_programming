#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int EOF_det;
	size_t len = 0;
	char *char_holder = NULL;

	if (ac != 1)
	{
		printf("Usage: %s <file>\n", av[0]);
		exit (EXIT_FAILURE);
	}
	else
	{
		printf("$ ");
		while ((EOF_det = getline(&char_holder, &len, stdin)) != -1)
		{
			printf("%s", char_holder);
			free(char_holder);
			break;
		}
	}
	return (0);
}
