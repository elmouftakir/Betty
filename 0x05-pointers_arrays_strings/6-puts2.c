#include "main.h"

/**
 * puts2 - function prints every other character of a string
 *
 * @str: input
 *
 * Return: void
 *
 */

void puts2(char *str)

{

	int lon = 0;
	int temp = 0;
	char *p = str;
	int c;

	while (*p != '\0')
	{
		p++;
		lon++;
	}
	temp = lon - 1;
	for (c = 0 ; c <= temp ; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
