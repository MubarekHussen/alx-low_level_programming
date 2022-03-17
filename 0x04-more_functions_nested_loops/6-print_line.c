#include "main.h"

/**
 * print_line - prints 1....n.
 *
 * Return: void
 */


void print_line(int n)
{

int j;

	for (j = 0; j < n; j++)
	{
		if (j >= 10)
		_putchar('_');
		_putchar('_');
	}
	_putchar('\n');
}
