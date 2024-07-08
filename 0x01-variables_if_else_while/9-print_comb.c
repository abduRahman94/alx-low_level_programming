#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 9;

	while (number > 0)
	{
		putchar(number + '0');
		putchar(' ');
		number--;
	}
	putchar('\n');

	return (0);
}
