#include "main.h"

/**
 * puts_half - a function that prints half of a string
 *
 * function should print the second half of the string
 *
 * @str: input
 *
 * Return: void
 */

void puts_half(char *str)
{
	int a, n, lon;

	lon = 0;
	for (a = 0; str[a] != '\0'; a++)
		lon++;
	n = (lon / 2);
	if ((lon % 2) == 1)
		n = ((lon + 1) / 2);
			for (a = n; str[a] != '\0'; a++)
				_putchar(str[a]);
	_putchar('\n');
}
