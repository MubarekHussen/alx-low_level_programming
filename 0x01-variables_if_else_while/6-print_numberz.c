#include <stdio.h>
/**
 * main - Single_Digit_Numbers.
(*
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = '0'; n < '10'; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
