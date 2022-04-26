#include "newton.h"

/**
 * _pow - returns the value of x raised to the power of y
 *
 * @x: Double
 * @y: Double
 *
 * Return: Double
 */

double _pow(double x, double y)
{
	double nb = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	y--;
	nb = _pow(x, y) * x;

	return (nb);
}

/**
 * add_node - Add a new element to the linked list
 *
 * @head: First element of the list
 * @elt: Value
 * Return: The adresse of the new element
 */

t_cell *add_node(t_cell **head, const double elt)
{
	t_cell *new;

	new = malloc(sizeof(t_cell));
	if (new == NULL)
		return (NULL);

	new->elt = elt;
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * f - f(x)
 *
 * @x: x
 * Return: Result of f(x)
 */

double f(double x)
{
	return (_pow(x, 2) - 2);
}

/**
 * fp - f'(x)
 *
 * @x: x
 * Return: Result of the derivate of f(x)
 */

double fp(double x)
{
	return (2 * x);
}

/**
 * newton - Find root of a function
 *
 * @a: start of the sequence (x0)
 * Return: The list with the values
 */

t_cell *newton(double a)
{
	double x0 = a, x1;
	t_cell *head = NULL;

	while (f(x0) < -0.0000000001 || f(x0) > 0.0000000001)
	{
		if (fp(x0) != 0)
			x1 = x0 - (f(x0) / fp(x0));
		else
			return (NULL);

		add_node(&head, x1);
		x0 = x1;
	}

	return (head);
}
