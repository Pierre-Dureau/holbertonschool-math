#include "holberton.h"

/**
 * multiplication - multiply complex number between them
 *
 * @c1: First complex number
 * @c2: Second complex number
 * @c3: Result of the multiplication
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	double r, i;

	r = (c1.re * c2.re) - (c1.im * c2.im);
	i = (c1.re * c2.im) + (c1.im * c2.re);

	c3->re = r;
	c3->im = i;
}
