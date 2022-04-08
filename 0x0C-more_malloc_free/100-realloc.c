#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 *
 * Return: pointer to newly allocated memory, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pr;
	unsigned int i, max = new_size;
	char *oldp = ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pr = malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	pr = malloc(new_size);
	if (new_size > old_size)
	{
		max = old_size;
	}
	for (i = 0; i < max; i++)
	{
		pr[i] = oldp[i];
	}
	free(ptr);
	return (pr);
}
