#include "main.h"
/**
 * _memset - copys chracter 'b' to the character that is derefferenced  by 's'.
 *@n: maximum length to be changed.
 *@b: the constant byte used to chnge the chracter.
 *@s: that references the character.
 *Return: difference.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
