#include "main.h"
/**
 * print_to_98 - count from n upto 98.
 *
 *@n: where the count starts
 *
 * Return: 0 on success
 */
void print_to_98(int n)
{
	for (ch = 'n'; ch <= '98'; ch++)
	{
		if (n == 98)
		{
			_putchar(ch);
		}
		else
		{
			_putchar(ch);
			_putchar(',');
			_putchar(' ');
		}
	}
}
