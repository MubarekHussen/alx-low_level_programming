#include "main.h"
/**
 * _puts - return length of string.
 *
 *@str: input string.
 */
void _puts(char *str)
{
	while (*str != '0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
