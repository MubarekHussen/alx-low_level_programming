#include "main.h"
/**
 * puts2 - jump one character.
 *
 *@str: input string.
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (str[i] == '.')
			break;
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
