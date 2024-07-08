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
	int third_iter;
	int fourth_iter;

	for (first_iter = 0; first_iter <= 6; first_iter++)
	{
		for (second_iter = first_iter + 1; second_iter <= 7; second_iter++)
		{
			for (third_iter = second_iter + 1; third_iter <= 8; third_iter++)
			{
				for (fourth_iter = third_iter + 1; fourth_iter <= 9; fourth_iter++)
				{
					putchar(first_iter + '0');
					putchar(second_iter + '0');
					putchar(' ');
					putchar(third_iter + '0');
					putchar(fourth_iter + '0');
					if (first_iter != 6 || second_iter != 7 || third_iter != 8 || fourth_iter != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
