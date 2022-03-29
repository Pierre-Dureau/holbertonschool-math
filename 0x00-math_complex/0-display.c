#include "holberton.h"

/**
 * display_complex_number - Print complex numbers
 *
 * @c: complex number
 */

void display_complex_number(complex c)
{
	double r = c.re;
	double i = c.im;

	printf("%.9g", r);
	if (i == 1)
		printf(" + i");
	else if (i == -1)
		printf(" - i");
	else if (i < 0)
		printf(" - %.9gi", -i);
	else if (i > 0)
		printf(" + %.9gi", i);

	printf("\n");
}
