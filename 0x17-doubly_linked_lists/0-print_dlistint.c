#include "lists.h"

/**
 * print_dlistint - prints elements of a dlistint_t list
 * @h: pointer to head
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	for (count = 0; temp; temp = temp->next, count++)
		printf("%d\n", temp->n);

	return (count);
}
