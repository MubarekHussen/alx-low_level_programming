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
	unsigned int i = 0;

	new_str = malloc(*str);
	if (str[i] == '\0' || new_str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
	free(new_str);
}
