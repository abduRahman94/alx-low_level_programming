#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, next;
	long counter = 0;

	while (counter < 98)
	{
		next = a + b;

		a = b;
		b = next;
		if (counter != 98)
			printf("%ld, ", a);
		counter++;
	}

	return (0);
}
