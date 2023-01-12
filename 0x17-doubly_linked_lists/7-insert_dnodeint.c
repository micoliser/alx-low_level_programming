#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a dlistint_node at index
 * @h: pointer to  head
 * @idx: index
 * @n: node data
 *
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	unsigned int i;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (!temp)
				return (NULL);
			temp = temp->next;
		}

		if (!temp->next)
			new = add_dnodeint_end(h, n);
		else
		{

			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);

			new->n = n;
			new->prev = temp;
			new->next = temp->next;
			temp->next->prev = new;
			temp->next = new;
		}
	}

	return (new);
}
