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
	
	while (*s != '\n')
	{
		count++;
		s++;
	}
	return (count);
}
