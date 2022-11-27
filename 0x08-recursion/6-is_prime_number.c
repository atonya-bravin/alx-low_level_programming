/**
 * is_prime_number - finds prime numbers
 *
 * @n : number to find factors for
 *
 * Return: 1(success) or 0(fail)
 */

int is_prime_number(int n)
{
	int counter = 1;
	int factors_counter = 0;
	int number = n;

	while (counter <= number)
	{
		if ((number % counter) == 0)
			factors_counter++;
		counter++;
	}
	if (factors_counter == 2)
		return (1);
	return (0);
}
