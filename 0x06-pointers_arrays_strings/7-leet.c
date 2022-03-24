#include "main.h"
/**
 *leet - convert to leet string.
 *@a: input parameter.
 *Return: leet string.
 */
char *leet(char *a)
{
	int i = 0, j = 0;
	char leet_ch[] = {'a', 'e', 'o', 't', 'l'};
	char leet_index[] = {4, 3, 0, 7, 1};

	while (a[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i] == leet_ch[j] || a[i] - 32 == leet_ch[j])
			{
				a[i] = leet_index[j] + '0';
				break;
			}
		}
		i++;
	}
	return (a);
}
