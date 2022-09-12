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

	printf("Size of a char: %ld byte(s)", sizeOf(character));
	printf("Size of a int: %ld byte(s)", sizeOf(integer));
	printf("Size of a long int: %ld byte(s)", sizeOf(longInteger));
	printf("Size of a long long int: %ld byte(s)", sizeOf(doubleLongInteger));
	printf("Size of a float: %ld byte(s)", sizeOf(floating));

	return (0);
}
