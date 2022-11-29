#include "lists.h"

/**
 * print_listint_safe - prints a list
 * @head: the list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *list = head;
	size_t count = 0;

	if (!head)
		exit(98);

	while (list)
	{
		printf("[%p] %d\n", (void *)list, list->n);
		count++;
		list = list->next;
	}

	return (count);
}
