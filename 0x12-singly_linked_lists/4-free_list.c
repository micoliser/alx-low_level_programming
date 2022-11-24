#include "lists.h"

/**
 * free_list - adds a new node at the end of the list_t list
 * @head: pointer to list
 *
 * Return: void
 */
void *free_list(list_t *head)
{
	list_t *temp = head, *second;

	while (temp->next)
	{
		second = temp;
		temp = temp->next;
		free(second->str);
		free(second);
	}
	free(temp->str);
	free(temp);
}
