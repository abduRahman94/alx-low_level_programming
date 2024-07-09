#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Returns 1 if c is alphanumeric else 0
 * @c: the char to check
 * Return: Always 0.
 */
int _islower(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
