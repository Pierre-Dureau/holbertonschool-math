#include "error_function.h"

/**
 * f - f(x)
 *
 * @x: x
 * Return: Result of the funtion
 */

double f(double x)
{
	return (1 / (x + 1));
}

/**
 * fp - f'(x)
 *
 * @x: x
 * Return: Result of the funtion
 */

double fp(double x)
{
	return (-1 / pow(x + 1, 2));
}

/**
 * Error - Plot in a logarithmic scale the error function
 *
 * @name: File
 * @n: Number of iteration of h
 */

void Error(FILE *name, double n)
{
	FILE *gnuplot = NULL;
	double S, h, x;

	name = fopen("Error_Function", "w");

	for (h = 0.1, x = -1; h != n; h /= 10, x--)
	{
		S = (f(h) - f(0)) / h;
		fprintf(name, "%f\t%.f\n", x, log(fabs(S - fp(0))));
	}
	fclose(name);

	gnuplot = popen("gnuplot", "w");
	fprintf(gnuplot, "set terminal png\n");
	fprintf(gnuplot, "set output 'error_function.png'\n");
	fprintf(gnuplot, "plot \"Error_Function\" w l\n");
	pclose(gnuplot);
}
