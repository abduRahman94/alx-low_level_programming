#include <ctype.h>
#include "main.h"

/**
 * _islower - Returns 1 if c is lowercase else 0
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
