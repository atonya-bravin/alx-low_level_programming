/**
 * factorial - calculates the factorial of a number
 *
 * @n: the number to find factorial of
 *
 * Return: factorial(success) or -1(fail)
 */

int factorial(int n)
{
	int number = n;

	if (number < 0)
		return (-1);
	if (number <= 1)
		return (1);

	return (number * factorial(number - 1));
}
