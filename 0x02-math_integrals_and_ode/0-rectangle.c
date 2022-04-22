#include "main.h"

/**
 * f - function
 *
 * @x: the parameter
 * Return: f(x)
 */

double f(double x)
{
	return (1 / (pow(x, 2) + 1));
}

/**
 * rectangle_method - Calcul integral with the rectangle method
 *
 * @a: lower limit
 * @b: upper limit
 * @steps: Number of rectangle
 * Return: The integral
 */

double rectangle_method(double a, double b, int steps)
{
	double width = (b - a) / steps;
	double sum = 0;
	double x;

	for (x = a; x <= b; x += width)
	{
		sum += width * f(x);
	}

	return (sum);
}
