#include "main.h"
/**
 * _puts - return length of string.
 *
 *@str: input string.
 */
void _puts(char *str)
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
