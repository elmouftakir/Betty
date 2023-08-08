#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function return pointer to a newly allocated
 *
 * @str: string.
 *
 * Return: pointer on array of chars
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++);

	strout = (char *)malloc(sizeof(char) * (a + 1));

	if (strout == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		strout[b] = str[b];

	return (strout);
}
