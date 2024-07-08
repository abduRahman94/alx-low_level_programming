#include "main.h"

/**
 * main - check code
 *
 * print_alphabet - Prints the alphabet letters to stdout followed by empty line
 * Return: Always 0.
 */
void print_alphabet(void)
{
        char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
