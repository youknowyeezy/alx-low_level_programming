#include "main.h"

/**
 * print_numbers - Print the numbers 0 to 10
 * Return: Numbers 0 to 10
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');
}
