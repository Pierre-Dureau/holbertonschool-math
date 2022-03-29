#include "holberton.h"

/**
 * division - divide complex number between them
 *
 * @c1: First complex number
 * @c2: Second complex number
 * @c3: Result of the division
 */

void division(complex c1, complex c2, complex *c3)
{
	complex c4;
	double lower;

	c4.re = (c1.re * c2.re) - (c1.im * -c2.im);
	c4.im = (c1.re * -c2.im) + (c1.im * c2.re);
	lower = (c2.re * c2.re) + (c2.im * c2.im);

	c3->re = c4.re / lower;
	c3->im = c4.im / lower;
}
