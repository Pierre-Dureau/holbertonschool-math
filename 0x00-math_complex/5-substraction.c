#include "holberton.h"

/**
 * substraction - substract complex number between them
 *
 * @c1: First complex number
 * @c2: Second complex number
 * @c3: Result of the soustract
 */

void substraction(complex c1, complex c2, complex *c3)
{
	c3->im = c1.im - c2.im;
	c3->re = c1.re - c2.re;
}
