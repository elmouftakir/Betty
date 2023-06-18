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
	int b = '1';

	while (a <= '8')
	{
		b = a + 1;
		{
			while (b <= '9')
			putchar(a);
			putchar(b);
			if (a != '8')
				{
					putchar(',');
					putchar(' ');
				}
				b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
