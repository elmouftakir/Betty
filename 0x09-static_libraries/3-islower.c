#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked.
 * Return: 1 if c is lowercase or 0 for otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
