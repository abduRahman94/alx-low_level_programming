#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program that display the size of different types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a Char: %c bytes\n", sizeof(char));
	printf("Size of an int: %d bytes\n", sizeof(int));
	printf("Size of a long int: %ld bytes\n", sizeof(long int));
	printf("Size of a long long int: %lld bytes\n", sizeof(long long int));
	printf("Size of a float: %f bytes\n", sizeof(float));
}
