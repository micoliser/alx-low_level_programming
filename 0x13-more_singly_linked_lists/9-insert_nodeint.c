#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the list
 * @idx: the index to insert
 * @n: the data of the new node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new_node, *temp2;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		if (idx == 0)
		{
			*head = new_node;
			return (new_node);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		if (idx == 0)
		{
			temp2 = temp->next;
			*head = new_node;
			new_node->next = temp2;

			return (new_node);
		}
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!temp->next)
			return (NULL);
		temp = temp->next;
	}
	temp2 = temp->next;
	temp->next = new_node;
	new_node->next = temp2;

	return (new_node);
}
