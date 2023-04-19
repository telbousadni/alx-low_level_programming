#include "function_pointers.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * print_name - print names using a pointer to function that returns void f
 * @name: name of the person
 * @f: name of fonction pointed to
 */
void print_name(char *name, void (*f)(char *));
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
