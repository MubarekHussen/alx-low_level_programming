#include "main.h"
/**
 * _strstr - that returns the length of matching strings.
 * @haystack: substring.
 * @needle: string.
 *
 * Return: a pointer when gets c.
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp = needle;

	for (; *needle != '\0'; needle++)
	{
		for (; *haystack != '\0'; haystack++)
		{
			if (*needle == *haystack)
			{
				break;
			}
		}
		if (*haystack == '\0' && *needle != '\0')
		{
			return (0);
		}
	}
	return (temp);
}
