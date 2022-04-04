#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates copy of a string.
 * @str: input string.
 * Return: char
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = malloc(*str);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
