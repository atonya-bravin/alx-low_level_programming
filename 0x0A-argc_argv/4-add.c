#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * Description: "prints 0 if no number is passed
 * prints Error if the number contains symbols"
 *
 * @argc: the number of argument passed to the program through command line
 * @argv: the argument array pointer
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int number_counter = 1;
	int character_counter;
	int sum = 0;

	if (argc > 1)
	{
		for (; number_counter < argc; number_counter++)
		{
			for (character_counter = 0; argv[number_counter][character_counter] != '\0';
					character_counter++)
			{
				if (((int)(argv[number_counter][character_counter]) >= 97 &&
						(int)(argv[number_counter][character_counter]) < 122) ||
						((int)(argv[number_counter][character_counter]) >= 65 &&
						(int)(argv[number_counter][character_counter]) < 90))
				{
					printf("Error\n");
					return (0);
				}
			}
			sum += (atoi(argv[number_counter]));
		}
	}
	else
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", sum);

	return (0);
}
