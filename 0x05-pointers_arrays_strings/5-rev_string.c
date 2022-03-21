#include "main.h"
/**
 * rev_string - return reverse.
 *
 *@s: input string.
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	while (i--)
	{
		_putchar(s[i]);
	}
}
