#include "main.h"
/**
 * print_numbers - print digit numbers!.
(*
 * Return: 0 on success
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
