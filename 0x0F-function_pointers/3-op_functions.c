#include "3-calc.h"

/**
 * op_add - claculates the sum of the interger
 * @a: first interger
 * @b: second interger
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/** 
 * op_sub - calculates the differences of two interger
 * @a: first interger
 * @b: second interger
 *
 * Return: differences of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of the interger 
 * @a: first interger
 * @b: second interger
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calculates the division of two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: ressult of the division of a and b
 */
int op_div(int a, int b)
{
	return (a  / b);
}

/**
 * op_mod - calculates the remainder of the  division of two intergers
 * @a: first interger
 * @b: second interger
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return ( a % b);
}
