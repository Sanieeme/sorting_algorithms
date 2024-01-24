#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using insertion
 * @list: pointer to a doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL, *sorted = NULL;
	listint_t *curr;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;
	while (curr != NULL)
	{
		sorted = curr->prev;
		temp = curr;
		curr = curr->next;
		while (temp->prev != NULL && sorted->n > temp->n)
		{
			if (sorted->prev  == NULL)
				*list = temp;
			else
				sorted->prev->next = temp;

			temp->prev = sorted->prev;

			if (temp->next != NULL)
				temp->next->prev = sorted;

			sorted->next = temp->next;
			temp->next = sorted;
			sorted->prev = temp;
			sorted = temp->prev;
			print_list(*list);
		}
	}
}
