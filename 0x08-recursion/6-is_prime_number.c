#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input 
 * integer is a prime number, otherwise return 0.
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime(n, divisor));
}
