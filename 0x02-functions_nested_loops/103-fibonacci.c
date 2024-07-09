#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, next;
	long int sum = 2;

	while (1)
	{
		next = a + b;
		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;

		a = b;
		b = next;
	}

	printf("%ld\n", sum);
	return 0;
}
