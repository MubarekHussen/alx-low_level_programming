#include "main.h"
/**
 * _strlen - return length of string.
 *
 *Return: 0
 *
 *@s: input string.
 */
int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
