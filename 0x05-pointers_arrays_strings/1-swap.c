#include <stdio.h>

/**
 * swap_int - swaps value of two ints
 * @a: First int to be swapped
 * @b: second int to be swapped
 * 
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* Function that swaps value of two ints */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
