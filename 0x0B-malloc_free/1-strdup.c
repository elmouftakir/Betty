#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function return pointer to a newly allocated
 *
 * @str: Pointer to string.
 *
 * Return: On success (str), otherwase (NULL).
 */

char *_strdup(char *str)
{
	int i = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	dup = malloc((1 + strlen(str)) * sizeof(char));

	if (dup == NULL)
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
