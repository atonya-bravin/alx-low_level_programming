/**
 * _pow_recursion - calculates the power of a number
 *
 * @x: the number to calculate power of
 * @y: the power we should raise x to
 *
 * Return: power(success) or -1(Error)
 */

int _pow_recursion(int x, int y)
{
	int base_number = x;
	int power = y;

	if (power < 0)
		return (-1);
	if (power == 0)
		return (1);

	return (base_number * _pow_recursion(base_number, power - 1));
}
