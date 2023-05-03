#include "lists.h"

/**
 * find_listint_loop - finds loop in a linked list
 * @head: head node of the linked list
 *
 * Description: finds a looped list using two pointers.
 *
 * Return: address of node where loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_node = head, *fast_node = head;

	if (head == NULL || head->next == NULL)
	return (NULL);
	slow_node = slow_node->next;
	fast_node = fast_node->next->next;
	while (fast_node && fast_node->next)
	{
	if (slow_node == fast_node)
	break;
	slow_node = slow_node->next;
	fast_node = fast_node->next->next;
	}
	if (slow_node != fast_node)
	return (NULL);

	slow_node = head;
	while (slow_node != fast_node)
	{
	slow_node = slow_node->next;
	fast_node = fast_node->next;
	}
	return (slow_node);
}
