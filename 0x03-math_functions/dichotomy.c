#include "dichotomy.h"

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
 * Return: Result of the funtion
 */

double f(double x)
{
	return (_pow(x, 2) - 2);
}

/**
 * dichotomy - Find root of a function
 *
 * @a: start of the intervale
 * @b: end of the intervale
 * Return: The list with the values
 */

t_cell *dichotomy(double a, double b)
{
	double c = 0;
	t_cell *head = NULL;

	if (a >= b)
		return (NULL);

	while (f(c) < -0.0000000001 || f(c) > 0.0000000001)
	{
		c = (a + b) / 2;
		if ((f(a) < 0 && f(c) < 0) || (f(a) > 0 && f(c) > 0))
			a = c;
		else
			b = c;
		add_node(&head, c);
		if (a == b)
			return (NULL);
	}

	return (head);
}
