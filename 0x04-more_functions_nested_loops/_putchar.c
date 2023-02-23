#include "main.h"

#include <unistd>

/**
 * _putchar - Writes character to output
 * @x: Character to print
 * Return: On Success 1 or -1 is returned on error and errno is set appropriately
 */

int _putchar(char x)
{
	return (write(1, &x, 1));
}
