#include "main.h"
/**
 * _strcat - making string concati.
 *@dest: main.
 *@src: to be concatenated.
 *Return: full string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*dest != '\0')
	{
		dest++;
		++i;
	}
	while (*src != '\0')
	{
		dest[i] = src[i];
		++i;
		++j;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
