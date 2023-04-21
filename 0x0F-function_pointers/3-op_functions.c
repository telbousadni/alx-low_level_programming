#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - functions adding two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of a & b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * opp_sub - function of the difference of two integers
 *
 * @a: the integer from which we will substract b
 * @b: the integer substracted from a
 *
 * Return: difference between a and b
 */

int opp_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function of multiplication of a and b
 *
 * @a: first integer
 * @b: 2nd integer
 *
 * Return: multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function of division of a and b
 *
 * @a: number in which well divide b from
 * @b: divided number from a
 *
 * Return: Division a/b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo funcion
 *
 * @a: first integer
 * @b: 2nd integer
 *
 * Return: modulo of a/b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
