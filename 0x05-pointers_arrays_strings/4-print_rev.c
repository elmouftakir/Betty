#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string to print
 *
 * return: void
 *
 */

void print_rev(char *s)
{
	int countre = 0;

	int c;

	while (*s != '\0')
	{
		countre++;
		s++;
	}
	s--;
	for (c = countre; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
