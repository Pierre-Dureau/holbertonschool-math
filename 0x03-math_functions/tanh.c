#include <stdio.h>
#include <math.h>

/**
 * main - Print the tanh function
 *
 * Return: 0
 */

int main(void)
{
	FILE *fp = NULL;
	FILE *gnuplot = NULL;
	double x, y;

	fp = fopen("tanh.txt", "w");

	for (x = -10; x <= 10; x += 0.01)
	{
		y = tanh(x);
		fprintf(fp, "%f\t%f\n", x, y);
	}

	fclose(fp);

	gnuplot = popen("gnuplot", "w");
	fprintf(gnuplot, "set terminal png\n");
	fprintf(gnuplot, "set output 'tanh.png'\n");
	fprintf(gnuplot, "plot \"tanh.txt\" w l\n");
	pclose(gnuplot);
	return (0);
}
