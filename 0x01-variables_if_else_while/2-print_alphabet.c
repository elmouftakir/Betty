#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entre point
 *
 * return (0) is successful
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
