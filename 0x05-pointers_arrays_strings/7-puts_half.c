#include "main.h"
/**
 * _puts - return length of string.
 *
 *@str: input string.
 */
void _puts(char *str)
{
	int i = 0;
	int n = 0;
	while (str[i])
	{
		i++;
	}
	if (i % 2 != 0)
		n = (i - 1) / 2;
	n = i / 2;
	while (str[n])
	{
		_putchar(str[n]);
	}
}
