#include "main.h"

/**
 * _strlen - returns the length of string
 *
 * @s: string input
 *
 * Return: countre
 */
int _strlen(char *s)
{
	int countre = 0;

	while (*s != '\0')
	{
		countre++;
		s++;
	}
	return (countre);
}
