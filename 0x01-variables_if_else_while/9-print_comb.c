#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 9;

	while (ch > 0)
	{
		putchar(ch + '0');
		putchar(' ');
		ch--;
	}
	putchar('\n');

	return (0);
}
