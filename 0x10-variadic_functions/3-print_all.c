#include "variadic_functions.h"

/**
 * op - Print character .
 * @valist: name va_list
 * Return: No Return
 */

void op-c(va_list form)
{
	printf("%c", va_arg(valist, int));
}
/**
 * op_i - Print Integer
 * valist: name va_list
 * Return: No Return
 */

void op-i(va_list valist)
{
	printf("%i", va_arg(valist, int));
}
/**
 * op_f - print FLoat numbers
 * @valist: name of va_list
 * Return: No Return
 */

void op-f(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
 * op_s -print string
 * @valist: name va_list
 * Return: No Return
 */

void op-s(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - check the code for Holberton School students.
 * @format: number of arguments in character format
 * Return: No Return
 */

void print_all(const char * const format, ...)
{

	va_list all;
	unsigned int i, j;
	char *separator = "";

	f ops[] = {
		{"c", op-c},
		{"i", op-i},
		{"f", op-f},
		{"s", op-s},
		};

	va_start(all, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (ops[j].op[0] == format[i])
			{
				printf("%s", separator);
				separator = ", ";
				ops[j].f(all);
				break;
			}
			j++;
		}
	i++;
	}

	printf("\n");
	va_end(all);
}
