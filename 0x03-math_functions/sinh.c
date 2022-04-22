#include <stdio.h>
#include <math.h>

/**
 * main - Print the sinh function
 *
 * Return: 0
 */

int main(void)
{
	FILE *fp = NULL;
	FILE *gnuplot = NULL;
	double x, y;

	fp = fopen("sinh.txt", "w");

	for (x = -10; x <= 10; x += 0.01)
	{
		y = sinh(x);
		fprintf(fp, "%f\t%f\n", x, y);
	}

	fclose(fp);

	gnuplot = popen("gnuplot", "w");
	fprintf(gnuplot, "set terminal png\n");
	fprintf(gnuplot, "set output 'sinh.png'\n");
	fprintf(gnuplot, "plot \"sinh.txt\" w l\n");
	pclose(gnuplot);
	return (0);
}
