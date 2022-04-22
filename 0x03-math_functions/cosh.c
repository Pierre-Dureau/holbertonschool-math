#include <stdio.h>
#include <math.h>

/**
 * main - Print the cosh function
 *
 * Return: 0
 */

int main(void)
{
	FILE *fp = NULL;
	FILE *gnuplot = NULL;
	double x, y;

	fp = fopen("cosh.txt", "w");

	for (x = -10; x <= 10; x += 0.01)
	{
		y = cosh(x);
		fprintf(fp, "%f\t%f\n", x, y);
	}

	fclose(fp);

	gnuplot = popen("gnuplot", "w");
	fprintf(gnuplot, "set terminal png\n");
	fprintf(gnuplot, "set output 'cosh.png'\n");
	fprintf(gnuplot, "plot \"cosh.txt\" w l\n");
	pclose(gnuplot);
	return (0);
}
