#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index of a dlistint_t list
 * @head: pointer to head
 * @index: index
 *
 * Return: 1 if succeeded and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *temp2;
	unsigned int i = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		temp2 = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{

		for (i = 0; i < index - 1; i++)
		{
			if (!temp)
				return (-1);
			temp = temp->next;
		}

		temp2 = temp->next;
		temp->next = temp->next->next;
		if (temp2->next)
			temp->next->prev = temp;
	}

	free(temp2);

	return (1);
}
