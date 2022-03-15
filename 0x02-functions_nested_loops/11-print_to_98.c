#include "main.h"
/**
 * print_to_98 - count from n upto 98.
 *
 * @n: where the count starts
 *
 * Return: 0 on success
 */
void print_to_98(int n)
{
	int x;

	for (x = 'n'; x <= 98; x++)
	{
		if (n == 98)
		{
			_putchar(x + '0');
		}
		else
		{
			_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
