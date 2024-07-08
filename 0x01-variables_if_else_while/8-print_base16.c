#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dg;
	char ch;

	for (dg = 0; dg <= 9; dg++)
	{
		putchar(dg + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
