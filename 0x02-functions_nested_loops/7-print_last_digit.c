#include "main.h"

/**
 *print_last_digit- prints the last digits of a number
 *@n: is an integer
 *
 *Return: Integer
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
