#include "main.h"
/**
 * print_sign - cheks lowercase letters!.
 *
 *@c: input to be tested.
 *
 * Return: 0 on success
 */
int print_sign(int c)
{
	if (c > 0)
	{

		return (1);
		_putchar('+');
	}
	else if (c == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (c < 0)
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}
