#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints person's name using a pointer to function f
 * @name: name of the person
 * @f: pointer to the function
 * Return: returns control
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
