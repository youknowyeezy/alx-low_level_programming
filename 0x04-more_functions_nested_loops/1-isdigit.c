#include "main.h"

/**
 * _isdigit - Checks if character is digit
 * @x: Character to be checked
 * Return: 1 for digit or 0 for any else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
