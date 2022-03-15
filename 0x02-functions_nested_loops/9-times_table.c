#include "main.h"
/**
 * times_table - multiplication tabel.
 *
 * Return: 0 on success
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			_putchar((col * row) + '0');
			_putchar(',');
			_putchar(' ');
			if (col == 0)
			{
				_putchar((col * row) + '0');
			}
		}
		_putchar('\n');
	}
}
