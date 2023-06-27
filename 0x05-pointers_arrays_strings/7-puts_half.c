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
	int a, b, lon;

	lon = 0;
	for (a = 0; str[a] != '\0'; a++)
		lon++;
	b = (lon / 2);
	if ((lon % 2) == 1)
		b = ((lon + 1) / 2)
			for (a = b; str[a] != '\0'; a++)
				_putchar(str[a]);
	_putchar('\n');
}
