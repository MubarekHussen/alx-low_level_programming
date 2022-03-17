#include "main.h"
/**
 * print_numbers - print digit numbers!.
(*
 * Return: 0 on success
 */
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		_putchar(ch);
	_putchar('\n');
}
