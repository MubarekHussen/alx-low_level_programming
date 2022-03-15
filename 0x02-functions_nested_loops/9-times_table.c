#include "main.h"
/**
 * times_table - multiplication tabel.
 *
 * Return: 0 on success
 */
void times_table(void)
{
	int row, col;

	for (row = 0; hr < 10; row++)
	{
		for (col = 0; min <= 9; col++)
		{
			_putchar((col * row) + '0');
			_putchar(',');
			_putchar(' ');
			if (j == 0)
			{
				_putchar((col * row) + '0');
			}
		}
		_putchar('\n');
	}
}
