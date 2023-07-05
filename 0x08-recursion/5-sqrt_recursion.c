#include "main.h"
/**
 * _second_sqrt_recursion - helpes function to calculate the square root
 *
 * @n: the number to calculate
 *
 * @r: help to calculate
 *
 */
int _second_sqrt_recursion(int n, int r)
{
	if (r * r > n)
		return (-1);
	else if (r * r == n)
		return (r);
	else
		return (_second_sqrt_recursion(n, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number calculate
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_second_sqrt_recursion(n, 0));
}
