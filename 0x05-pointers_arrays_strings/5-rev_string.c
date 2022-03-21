#include "main.h"
/**
 * rev_string - return reverse.
 *
 *@s: input string.
 */
void rev_string(char *s)
{
	int i, len, temp;
	char n_s[1000];

	for (i = 0, len = 0; s[i] != '\0'; ++i, ++len)
		;
	for (i = 0; i < len; ++i)
	{
		n_s[i] = s[i];
	}
	temp = len -1;
	for (i = 0; i < len; ++i, ++temp)
	{
		s[i] = n_s[temp];
	}
}
