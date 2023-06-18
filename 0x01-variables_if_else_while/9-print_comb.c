#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entre point
 *
 *
 * Return: (0) is successful
*/

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
