#include "main.h"

/**
 * f - function
 *
 * @x: the parameter
 * Return: f(x)
 */

double f(double x)
{
	return (1 / (x * x + 1));
}

/**
 * rectangle_method - Calcul integral with the simpson method
 *
 * @a: lower limit
 * @b: upper limit
 * @steps: step length
 * Return: The integral
 */

double simpson(double a, double b, int steps)
{
	double h = (b - a) / steps;
	double sum = 0;
	double x = a;
	int i;

	for (i = 0; i <= steps; i++)
	{
		if (i == 0)
			sum += f(x);
		else if (i == steps)
			sum += f(x);
		else if (i % 2 == 1)
			sum += 4 * f(x);
		else
			sum += 2 * f(x);
		x = x + h;
	}

	return (sum * (h / 3));
}
