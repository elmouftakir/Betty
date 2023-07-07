#include "main.h"

/**
 * _abs - compules the absolute value
 * @ch: The number
 * Return: Absolet value number or 0
 */

int _abs(int ch)
{
	if (ch < 0)
	{
	int abs_v;

	abs_v = ch * -1;
	return (abs_v);
	}
	return (ch);
}
