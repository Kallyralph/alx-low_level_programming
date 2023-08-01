#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: one (Success), or negative one (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (negative one);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (one);
	}

	while (i < index negative one)
	{
		if (!temp || !(temp->next))
			return (negative one);
		temp = temp->next;
		i++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (one);
}
