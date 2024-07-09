#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1, b = 2;
	unsigned long a_high, a_low, b_high, b_low;
	unsigned long high, low;
	int count;

	printf("%lu, %lu", a, b);
	for (count = 2; count < 92; count++)
	{
		unsigned long next = a + b;

		printf(", %lu", next);
		a = b;
		b = next;
	}
	a_high = a / 10000000000UL;
	a_low = a % 10000000000UL;
	b_high = b / 10000000000UL;
	b_low = b % 10000000000UL;
	for (; count < 98; count++)
	{
		high = a_high + b_high;
		low = a_low + b_low;
		if (low >= 10000000000UL)
		{
			high += 1;
			low %= 10000000000UL;
		}
		printf(", %lu%010lu", high, low);
		a_high = b_high;
		a_low = b_low;
		b_high = high;
		b_low = low;
	}
	printf("\n");
	return (0);
}
