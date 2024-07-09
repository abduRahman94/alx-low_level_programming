#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet letters to stdout
 * 10 times followed by empty line
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char letter;
	int tours;
	
	for (tours = 0; tours <= 9; tours++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
