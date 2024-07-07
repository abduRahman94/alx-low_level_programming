#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char min;
	char maj;

	for (maj = 'A'; maj <= 'Z'; maj++)
	{
		for (min = 'a'; min <= 'z'; min++)
		{
			putchar(min);
		}
		putchar(maj);
	}
	putchar('\n');

	return (0);
}
