#include <stdio.h>
#include <math.h>

#define PI 3.14159265

/**
 * main - Print the tan function
 *
 * Return: 0
 */

int main(void)
{
	FILE *fp = NULL;
	FILE *gnuplot = NULL;
	double x, y;

	fp = fopen("tan.txt", "w");

	for (x = 0; x <= 6 * PI; x += 0.01)
	{
		y = tan(x);
		fprintf(fp, "%f\t%f\n", x, y);
	}

	fclose(fp);

	gnuplot = popen("gnuplot", "w");
	fprintf(gnuplot, "set terminal png\n");
	fprintf(gnuplot, "set output 'tan.png'\n");
	fprintf(gnuplot, "plot \"tan.txt\" w l\n");
	pclose(gnuplot);
	return (0);
}
