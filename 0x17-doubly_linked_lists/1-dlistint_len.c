#include "lists.h"

/**
 * dlistint_len - returns thenumber of nodes in a dlistint_t list
 * @h: pointer to head
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	for (count = 0; temp; temp = temp->next, count++)
		;

	return (count);
}
