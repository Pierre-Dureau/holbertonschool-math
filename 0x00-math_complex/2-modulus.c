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
