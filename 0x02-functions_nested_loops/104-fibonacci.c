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

	while (1)
	{
		next = a + b;
		if (counter >= 98)
			break;

		a = b;
		b = next;
		counter++;
	}

	printf("%ld\n", a);
	return (0);
}
