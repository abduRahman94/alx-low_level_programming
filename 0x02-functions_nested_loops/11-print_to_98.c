#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - adds two number
 *
 * Return: Always 0.
 */
void print_to_98(void)
{
	int i;
	
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
		
			if (i != 98)
				printf(", ");
		}
	}
    printf("\n");
}
