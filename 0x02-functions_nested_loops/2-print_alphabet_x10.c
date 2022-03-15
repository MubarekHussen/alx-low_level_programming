#include "main.h"
/**
 *print_alphabet - Lowercase alphabet Letters!.
 * 
 *main - prints 10x
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_alphabet();
	return (0);
}
