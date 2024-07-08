#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_iter;
	int second_iter;

	for (first_iter = 0; first_iter <= 9; first_iter++)
	{
		for (second_iter = 0; second_iter <= 9; second_iter++)
		{
			putchar(first_iter);
			putchar(second_iter);
			if (second_iter < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
