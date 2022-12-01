#include "lists.h"

/**
 * check_cycle - check sll has cycle
 * @list: pointer to sll
 * Return: 0 no cycle, 1 there cyc
 */
int check_cycle(listint_t *list)
{
	listint_t *slow_pointer = list;
	listint_t *fast_pointer = list;

	while (slow_pointer && fast_pointer && fast_pointer->next)
	{
		slow_pointer = slow_pointer->next;
		fast_pointer = fast_pointer->next->next;

		if (slow_pointer == fast_pointer)
			return (1);
	}
	return (0);
}
