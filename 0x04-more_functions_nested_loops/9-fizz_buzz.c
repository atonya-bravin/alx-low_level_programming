#include <stdio.h>

/**
 * main - FizzBuzz
 *
 * Description: "prints 1 to 100 followed by a new line
 * when it gets to multiples of three, it prints Fizz
 * when it gets to multiple of five, it prints Buzz
 * when it gets to multiples of five and three, it prints FizzBuzz"
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int numberCounter = 1;
	int last_number = 100;

	while (numberCounter <= last_number)
	{
		if ((numberCounter % 3) == 0)
			printf("%s ", "Fizz");
		else if ((numberCounter % 5) == 0)
			printf("%s ", "Buzz");
		else if (((numberCounter % 3) == 0) && ((numberCounter % 5) == 0))
			printf("%s ", "FizzBuzz");
		else
			printf("%d ", numberCounter);
		numberCounter++;
	}
	return (0);
}
