#include "main.h"

/**
 * more_numbers - prints 1....14 10x.
 *
 * Return: void
 */


void more_numbers(void)
{
	int i;

	for (j = 0; j < 10; j++)
	{
	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		{
			_putchar((i / 10) + '0');
		}
		putchar((i % 10) + '0');
	}
	_putchar('\n');
	}
}
