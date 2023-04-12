#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - return a pointer to a new string which is a duplicate string
 * @str: char
 * Return: a pointer to the duplicated string,and NULL if insufficient memory
 */
char *_strdup(char *str)
{
	int i = 0, r = 0;
	char *ptr = malloc(sizeof(char) * (i + 1));

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	if (ptr == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		ptr[r] = str[r];
	return (ptr);
}
