#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: pointer of s
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
