#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - that prints a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 * If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nbr = 0;
	const listint_t *tmp, *node;

	if (!head)
	exit(98);
	node = head;
	while (node)
	{
	nbr++;
	printf("[%p] %d\n", (void *)node, node->n);
	tmp = node;
	node = node->next;

	/* detect when a node is visited for the second time*/
	/*and stop printing the list to prevent infinite looping.*/

	if (tmp <= node)
	{
	printf("-> [%p] %d\n", (void *)node, node->n);
	exit(98);
	}
	}
	return (nbr);
}
