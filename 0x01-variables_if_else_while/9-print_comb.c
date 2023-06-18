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
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
