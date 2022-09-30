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
	int sum = 0;
	char *zero_string = "0";

	if (argc > 1)
	{
		for (; number_counter < argc; number_counter++)
		{
			if (argv[number_counter] != zero_string &&
					(atoi(argv[number_counter])) == 0)
			{
				printf("Error\n");
				return (0);
			}
			else
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
