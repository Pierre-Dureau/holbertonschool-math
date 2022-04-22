#include <stdio.h>
#include <math.h>

#define PI 3.14159265

/**
 * main - Print the sin function
 *
 * Return: 0
 */

int main(void)
{
	FILE *fp = NULL;
	FILE *gnuplot = NULL;
	double x, y;

	fp = fopen("sin.txt", "w");
	for (x = 0; x <= 6 * PI; x += 0.1)
	{
		y = sin(x);
		fprintf(fp, "%f\t%f\n", x, y);
	}
	fclose(fp);

	gnuplot = popen("gnuplot", "w");
	fprintf(gnuplot, "set terminal png\n");
	fprintf(gnuplot, "set output 'sin.png'\n");
	fprintf(gnuplot, "plot \"sin.txt\" w l\n");
	pclose(gnuplot);

	return (0);
}
