#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @ch : the number to be checked
 * retourn: for upper (1) or (0) for any else
 */

int _isupper(int ch)

{
	if (ch >= 'A' && ch <= 'Z')

		return (1);
	else
		return (0);
}
