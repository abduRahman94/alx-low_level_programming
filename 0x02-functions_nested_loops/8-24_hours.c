#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Returns last digit of given number
 * @c: the char to check
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hours;
	int mins;

	for (hours = 0; hours <= 23; hours++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
