#include "lists.h"

/**
 * free_listint2 - free list
 * @head: pointer to list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head, *temp2;

	if (*head)
	{
		while (temp->next)
		{
			temp2 = temp;
			temp = temp->next;
			free(temp2);
		}

		free(temp);
	}
	*head = NULL;
}
