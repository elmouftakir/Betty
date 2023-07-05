#include "main.h"

/**
 * is_prime_number2 - helping function
 *
 * @n: the number to check
 *
 * @r: the divisor to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number2(int n, int r)
{
	if (n % r == 0)
		return (0);
	if (r * r > n)
		return (1);
	return (is_prime_number2(n, r + 1));
}
/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: the number to check
 *
 * Return: 1 if n is a prime number and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime_number2(n, 2));
}
