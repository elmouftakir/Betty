#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the seperator string to be printed
 * @n: the numbers of parameters
 * return: no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (i + 1 != n && separator != NULL)
			printf("%d%s", va_arg(valist, int), separator);
		else
			printf("%d", va_arg(valist, int));
	}
	va_end(valist);
	printf("\n");
}
