#include "heron.h"

/**
 * add_nodeint - adds a new node at the beginning of a t_cell list
 *
 * @head: Head of the list
 * @n: Value of the element
 * Return: The address of the new element
 */

t_cell *add_nodeint(t_cell **head, double n)
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
 * heron - Heron sequence until having convergence
 *
 * @p: The variable
 * @x0: u0
 * Return: The list
 */

t_cell *heron(double p, double x0)
{
	if (p > 0)
	{
		t_cell *head = NULL;
		double x1;

		while (x0 != x1)
		{
			add_nodeint(&head, x0);
			x0 = 0.5 * (x0 + (p / x0));
			x1 = 0.5 * (x0 + (p / x0));
		}

		return (head);
	}
	else
		return (NULL);
}
