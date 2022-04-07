#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_len - calculate the string length.
 * @s1: input string1.
 * @s2: input string2
 * @n: length tobe concatenated.
 * Return: length
 */


int str_len(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, tot;

	for (i = 0; s1[i]; i++)
		;
	i++;
	for (j = 0; s2[j]; j++)
		;
	j++;
	tot = i + n;
	return (tot);
}

/**
 * string_nconcat - creates a concatination string.
 * @s1: input string1.
 * @s2: input string2.
 * @n: length to be concatenated.
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = str_len(s1, s2, n);
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s[j] != '\0' && j < n; j++, i++)
	{
		s[i] = s2[j];
	}
	return (s);
}
