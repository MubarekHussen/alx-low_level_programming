#include "main.h"
/**
 * puts2 - jump one character.
 *
 *@str: input string.
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\n'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
