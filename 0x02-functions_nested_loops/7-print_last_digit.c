#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Returns last digit of given number
 * @c: the char to check
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	int last_digit = abs(c % 10);
	_putchar(last_digit + '0');
	_putchar(last_digit + '0');
}
