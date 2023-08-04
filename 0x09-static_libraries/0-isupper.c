#include "main.h"

/**
 * _isupper- check the uppercase.
 * @c :  function that checks for uppercase character.
 * Return:(0) Always
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
