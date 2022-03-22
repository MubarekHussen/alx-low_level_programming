#include "main.h"
/**
 * puts_half - return length of string.
 *
 *@str: input string.
 */
void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i])
	{
		i++;
	}
	if (i % 2 != 0)
		n = (i - 1) / 2;
	while (n--)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
