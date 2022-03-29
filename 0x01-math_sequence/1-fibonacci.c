#include "fibonacci.h"

/**
 * add_nodeint - adds a new node at the beginning of a t_cell list
 *
 * @head: Head of the list
 * @n: Value of the element
 * Return: The address of the new element
 */

t_cell *add_nodeint(t_cell **head, int n)
{
	t_cell *t;

	t = malloc(sizeof(t_cell));
	if (t == NULL)
		return (NULL);

	t->elt = n;
	t->next = *head;
	*head = t;

	return (t);
}

/**
 * gold_number - Find the gold number
 *
 * @head: List of fibonacci number
 * Return: The gold number
 */

double gold_number(t_cell *head)
{
	double n = ((double)head->elt / (double)head->next->elt);

	return (n);
}

/**
 * Fibonnaci - Create a list with the 20 first fibonacci numbers
 *
 * Return: The linked list
 */

t_cell *Fibonnaci()
{
	t_cell *head = NULL;
	int n = 1, m = 1, i;

	add_nodeint(&head, 1);
	add_nodeint(&head, 1);

	for (i = 0; i < 18; i++)
	{
		if (i % 2)
		{
			n = n + m;
			add_nodeint(&head, n);
		}
		else
		{
			m = n + m;
			add_nodeint(&head, m);
		}
	}

	return (head);
}
