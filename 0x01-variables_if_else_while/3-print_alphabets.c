#include <stdio.h>

/**
 * main - Prints the alphabet in lower and uppercase
 * Return: Always 0 (Success)
 */

int main(void)

{

	int low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z', low++)
	putchar(low);
	putchar('\n');

	return (0);
}

