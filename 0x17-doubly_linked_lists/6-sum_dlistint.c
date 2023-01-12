#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a dlistint_t list
 * @head: pointer to head
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (temp)
	{
		for (; temp; temp = temp->next)
			sum += temp->n;
	}

	return (sum);
}
