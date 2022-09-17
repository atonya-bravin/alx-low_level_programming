#include <stdio.h>

/**
 *main - prints the largets prime factor
 *
 * Description: "finds the prime factors of a number
 * compares the prime factors to find the largest of them
 * prints the largest"
 *
 * Return: Always 0 (sucess)
 *
 */

int main(void)
{
	long number = 612852475143;
	int prime_factor_number = 2;
	int largest_prime_factor = 0;

	while (prime_factor_number <= number)
	{
		if((number % prime_factor_number) == 0)
		{
			if (prime_factor_number > largest_prime_factor)
			{
				largest_prime_factor = prime_factor_number;
			}
			number /= prime_factor_number;
		}
		else
			prime_factor_number++;
	}
	printf("%d\n", largest_prime_factor);
	return (0);

}
