#include "main.h"
/**
 * _strcpy - making a copy.
 *@dest: high copy.
 *@src: main.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}
