#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: gives size of input.
 * @c: iput chracter.
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	char *ch_array;
	unsigned int i;

	ch_array = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		ch_array[i] = c;
	}
	if (size == 0)
	{
		return (0);
	}
	return ch_array;
}
