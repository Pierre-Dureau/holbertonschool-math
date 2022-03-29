#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <math.h>

/**
 * struct complex - number a + bi
 *
 * @re: Real number (a)
 * @im: Imaginary number (bi)
 */
typedef struct complex
{
	double re;
	double im;
} complex;

double modulus(complex c);
void addition(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);

void JuliaSet(FILE *name, char name1[20], complex c, int xmax, int ymax);

#endif /* HOLBERTON_H */
