#include "main.h"

/**
 * _islower - a program checks if char is lowercase
 * @c: is the char to be checked.
 *
 * Description : here goes the description
 * Section header : blablablabetty
 * Return: 1 if char is lowercase, 0 otherwise.
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
}
