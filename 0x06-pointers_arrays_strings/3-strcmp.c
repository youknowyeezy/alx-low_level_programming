#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: First pointer.
 * @s2: Second pointer.
 * Return: If s1 < s2, the negative difference. If s1 == s2, 0. If s1 > s2, positive difference.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
