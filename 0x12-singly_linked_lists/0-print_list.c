#include <stdio.h>
#include "lists.h"

/**
 * print_list - counts the number of nodes.
 *
 * @h: a pointer to the list.
 * Return: num of node.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d]%s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}

