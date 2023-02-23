#include "main.h"

#include <unistd>

/**
 * _putchar - Writes character to output
 * @c: Character to print
 * Return: On Success 1 or -1 is returned on error and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
