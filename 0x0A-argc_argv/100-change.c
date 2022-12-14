#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 *
 * Description: "prints Error if number of the arguments
 * passed is not exactly 1
 * if number passed as the argument is negatice, print 0
 * change is given in 25(s), 10(s), 5(s), 2(s), and 1(s)"
 *
 * @argc: number of arguments passed through the command line
 * @argv: the arguments array pointer
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
/\s\+$//e
	int remaining_cents;
	int number_of_change_cents = 0;

	if (argc == 2)
	{
		remaining_cents = atoi(argv[1]);
		if (remaining_cents > 0)
		{
		while (remaining_cents > 0)
		{
			if ((remaining_cents % 25) == 0)
				remaining_cents -= 25;
			else if ((remaining_cents % 10) == 0)
				remaining_cents -= 10;
			else if ((remaining_cents % 5) == 0)
				remaining_cents -= 5;
			else if ((remaining_cents % 2) == 0)
				remaining_cents -= 2;
			else if ((remaining_cents % 1) == 0)
				remaining_cents -= 1;

			number_of_change_cents++;

		}
		if (remaining_cents == 0)
			printf("0\n");
		printf("%d\n", number_of_change_cents);
		}
		else
			printf("0\n");
	}
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
