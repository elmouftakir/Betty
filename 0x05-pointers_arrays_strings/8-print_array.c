#include "main.h"

/**
 * print_array - function that prints n elements of an array
 *
 * @a: array name
 *
 * @n: the number of elements of the array to be printed
 *
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d\", a[n - 1]);
	}
	printf("\n");
}
