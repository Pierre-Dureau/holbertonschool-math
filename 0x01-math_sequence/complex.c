#include "holberton.h"

/**
 * modulus - calcul the modulus of a complex number
 *
 * @c: complex number
 * Return: the modulus
 */

double modulus(complex c)
{
	double mod;

	mod = sqrt(pow(c.im, 2) + pow(c.re, 2));

	return (mod);
}

/**
 * addition - add complex number between them
 *
 * @c1: First complex number
 * @c2: Second complex number
 * @c3: Result of the addition
 */

void addition(complex c1, complex c2, complex *c3)
{
	c3->im = c1.im + c2.im;
	c3->re = c1.re + c2.re;
}

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
