#include "function_pointers.h"

#include <stdio.h>

/**
 * print_name - Print name using pointer function.
 * @name: String to add.
 * @f: Pointer to function.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
