#include "holberton.h"

/**
 * main - Create an image with the mandelbrot's set
 *
 */

void main(void)
{
	int x, y, i;
	double a, b, t, n = 250;
	int width = n * 4, height = n * 4;
	complex c;
	FILE *pgmimg;

	pgmimg = fopen("mandelbrot.pgm", "wb");
	fprintf(pgmimg, "P2\n");
	fprintf(pgmimg, "%d %d\n", width, height);
	fprintf(pgmimg, "255\n");

	for (x = 0; x < width; x++)
	{
		a = 2 - (x / n);
		for (y = 0; y < height; y++)
		{
			b = -2 + (y / n);
			c.re = 0;
			c.im = 0;
			for (i = 1; i < 255; i++)
			{
				t = c.re;
				c.re = (c.re * c.re) - (c.im * c.im) + b;
				c.im = (2 * t * c.im) + a;
				if ((c.re * c.re) + (c.im * c.im) > 4)
					break;
			}
			if (i == 255)
				fprintf(pgmimg, "%d ", 255);
			else
				fprintf(pgmimg, "%d ", 0);
		}
		fprintf(pgmimg, "\n");
	}
	fclose(pgmimg);
}
