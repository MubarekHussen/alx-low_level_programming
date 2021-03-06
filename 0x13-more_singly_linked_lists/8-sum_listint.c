#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sums all elements of the list.
 * @head: to refer the head.
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
