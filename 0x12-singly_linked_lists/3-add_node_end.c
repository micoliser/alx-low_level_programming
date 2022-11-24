#include "lists.h"

/**
 * add_node - adds a new node at the end of the list_t list
 * @head: pointer to list
 * @str: string to add
 *
 * Return: address of new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *temp;
	
	temp = *head;
	list = malloc(sizeof(list_t));

	if (!list)
		return (NULL);

	list->str = strdup(str);
	list->len = strlen(str);
	list->next = NULL;

	while (temp->next)
		temp = temp->next;
	temp->next = list;

	return (list);
}
