#include "main.h"

/**
 * print_diagonal - function draws a diagonal line on terminal.
 * @n : the number of times the character
 */
void print_diagonal(int n)
{
	int l;
	int i = 0;

	while (i < n)
	{
		l = i;
		while (l--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
