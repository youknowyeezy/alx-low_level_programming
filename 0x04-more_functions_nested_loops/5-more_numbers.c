#include "main.h"

/**
 * more_numbers - prints 10 times 
 * Return: 10 times the numbers 0 to 10
 */

void more_numbers(void)
{
	int x, y:

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
