#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - number is prime
 * @n: interger params
 * @m: interger params
 * Return: boolean
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - prime
 * @n: intergers params
 * Return: recursion
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
	return (0);
	}
	else
	{
	return (divisors(3, n));
	}
}

