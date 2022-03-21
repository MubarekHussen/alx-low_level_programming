#include "main.h"
/**
 * print_rev - return length of string.
 *
 *@str: input string.
 */
void print_rev(char *s)
{
	int i,len;
 
	len = _strlen(str);
	for (i = len; i >= 0; i--)
	{
		_putchar(*(str+i));
		str++;
	}
	_putchar('\n');
}
