#include "main.h"

/**
 * print_sign - Returns sign of given argument
 * @c: the char to check
 * Return: Always 0.
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar("+");
		return (1);
	}
	else if (c < 0)
	{
		_putchar("-");
		return (-1);
	}
	else
	{
		_putchar("0");
		return (0);
	}
}
