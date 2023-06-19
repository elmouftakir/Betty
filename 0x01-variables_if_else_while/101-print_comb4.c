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
	int a = '0';
	int b;
	int c;

	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7')
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
