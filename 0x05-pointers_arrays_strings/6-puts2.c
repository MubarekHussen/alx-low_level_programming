#include "main.h"
/**
 * puts2 - jump one character.
 *
 *@str: input string.
 */
void puts2(char *str)
{
	long i = 0;

	while (*(str + i))
	{
		if (str[i] == 'H')
			break;
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
