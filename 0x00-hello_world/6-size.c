#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: 'prints variable sizes'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character;
	int integer;
	float floating;
	long longInteger;
	long long doubleLongInteger;

	printf("Size of a char: %lu byte(s)", sizeof(character));
	printf("Size of a int: %lu byte(s)", sizeof(integer));
	printf("Size of a long int: %lu byte(s)", sizeof(longInteger));
	printf("Size of a long long int: %lu byte(s)", sizeof(doubleLongInteger));
	printf("Size of a float: %lu byte(s)", sizeof(floating));

	return (0);
}
