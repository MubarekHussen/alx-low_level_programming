#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_node - to traverse the list.
 * @head: to refer the head.
 * Return: head.
 */

listint_t *count_node(listint_t *head)
{
	head = head->next;
	return (head);
}

/**
 * get_nodeint_at_index - gets the node at the index.
 * @head: to refer the head.
 * Return: head.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	else
	{
		for (i = 1; i <= index; i++)
		{
			count_node(head);
		}
	}
	return (head);
}
