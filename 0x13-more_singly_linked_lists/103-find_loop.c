#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - find the loop in a linked list
 * @head: head of linked list
 * Description: Not allowed to use malloc, free or arrays.
 * Can only declare a max of 2 variables.
 * Return: Address of node where loop starts, or NULL if no loop found.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *currenta, *currentb;

	if (head == NULL)
		return (NULL);

	currenta = currentb = head;
	do {
		if (currenta->next)
			currenta = currenta->next;
		else
			return (NULL);

		if (currentb->next->next)
			currentb = currentb->next->next;
		else
			return (NULL);
	} while (currentb != currenta);

	currenta = head;
	while (currentb != currenta)
	{
		currentb = currentb->next;
		currenta = currenta->next;
	}

	return (currenta);
}
