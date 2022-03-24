#include "main.h"
/**
 *leet - convert to leet string.
 *@a: input parameter.
 *Return: leet string.
 */
char *leet(char *a)
{
	int i = 0, j = 0;

	char leet_ch[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int leet_index[10] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	while (a[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == leet_ch[j])
			{
				a[i] = leet_index[j];
				break;
			}
		}
		i++;
	}
	return (a);
}
