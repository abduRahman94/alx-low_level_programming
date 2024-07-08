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

	for (first_iter = 0; first_iter <= 98; first_iter++)
	{
		for (second_iter = first_iter + 1; second_iter <= 99; second_iter++)
		{
			putchar((first_iter / 10) + '0');
			putchar((first_iter % 10) + '0');
			putchar(' ');
			putchar((second_iter / 10) + '0');
			putchar((second_iter % 10) + '0');
			if (first_iter != 98 || second_iter != 99)
			{
				putchar(' ');
				putchar(',');
			}
		}
	}
	putchar('\n');

	return (0);
}
