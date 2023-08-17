#include "variadic_functions.h"

/**
 * print_strings - prints string, followed by a new line.
 * @separator: the seperator string
 * @n: the numbers of parameters
 * return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char*);
		if (!str && i + 1 != n && separator)
			printf("(nil)%s", separator);
		else if (i + 1 != n && separator)
			printf("%s%s", str, separator);
		else if (!str)
			printf("(nil)");
		else
			printf("%s", str);
	}
	va_end(valist);
	printf("\n");
}
