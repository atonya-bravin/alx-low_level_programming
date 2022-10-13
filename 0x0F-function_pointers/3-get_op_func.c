#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform the operation
 *
 * @s: the operator of the intended operation
 * @a: first number
 * @b: second number
 *
 * Return: pointer to the appropriate function
 *
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	(void) ops;
	(void) s;
	(void) i;
	
	printf("i am in");
	return (0);
}
