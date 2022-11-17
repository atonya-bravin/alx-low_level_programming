#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main(int argc,char **argv)
{
	char *string_holder = NULL;
	size_t len = 0;
	char *token;

	if (argc != 1)
	{
		printf("Usage: %s <file>\n", argv[0]);
		exit (EXIT_FAILURE);
	}
	else
	{
		while (1)
		{
			printf("$ ");
			getline(&string_holder, &len, stdin);
			token = strtok(string_holder, " ");
			while (token)
			{
				printf("%s\n", token);
				token = strtok(NULL, " ");				
			}
		}
	}
	return (0);
}
