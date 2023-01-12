#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a dlistint_t list
 * @head: pointer to head
 * @n: node data
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (!(*head))
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;

		return (new);
	}

	for (; temp->next; temp = temp->next)
		;

	temp->next = new;
	new->next = NULL;
	new->prev = temp;

	return (new);
}
