#include "holberton.h"

/**
 * conjugate - change a complex number to his conjugate
 *
 * @c: complexe number
 * Return: his conjugate
 */

complex conjugate(complex c)
{
	if (c.im != 0)
		c.im = -(c.im);

	return (c);
}
