#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: Always Nothing
 *
 */

void jack_bauer(void)
{
	int minutes;
	int seconds;
	int first_min_num;
	int second_min_num;
	int first_sec_num;
	int second_sec_num;

	for (minutes = 0; minutes <= 23; minutes++)
	{
		for (seconds = 0; seconds < 60; seconds++)
		{
			first_min_num = ((minutes - (minutes % 10)) / 10);
			second_min_num = minutes % 10;
			first_sec_num = ((seconds - (seconds % 10)) / 10);
			second_sec_num = seconds % 10;
			_putchar(first_min_num + '0');
			_putchar(second_min_num + '0');
			_putchar(':');
			_putchar(first_sec_num + '0');
			_putchar(second_sec_num + '0');
			_putchar('\n');
		}
	}
}
