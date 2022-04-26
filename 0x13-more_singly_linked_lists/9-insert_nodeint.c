#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sums all elements of the list.
 * @head: to refer the head.
 * Return: sum
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 0; temp->next == NULL && i < idx; ++i)
	{
		temp = temp->next;
	}
	if (i == idx)
	{
		new_node->n = n;
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
