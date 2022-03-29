#include "holberton.h"

/**
 * argument - calcul the argument of a complex number
 *
 * @c: complex number
 * Return: the argument
 */

double argument(complex c)
{
	double arg;

	arg = atan(fabs(c.im) / fabs(c.re));
	if (c.re < 0 && c.im < 0)
		arg = -(PI - arg);
	else if (c.re < 0)
		arg = PI - arg;
	else if (c.im < 0)
		arg = -arg;

	return (arg);
}
