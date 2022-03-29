#include "holberton.h"

/**
 * main - Create an image with the mandelbrot's set
 *
 */

void main(void)
{
	int x, y, i;
	double r, n = 250;
	int width = n * 4, height = n * 4;
	complex c, t;
	FILE *pgmimg;

	pgmimg = fopen("mandelbrot.pgm", "wb");
	fprintf(pgmimg, "P2\n");
	fprintf(pgmimg, "%d %d\n", width, height);
	fprintf(pgmimg, "255\n");

	for (y = 0; y < width; y++)
	{
		t.im = 2 - (y / n);
		for (x = 0; x < height; x++)
		{
			t.re = -2 + (x / n);
			c.re = 0;
			c.im = 0;
			for (i = 1; i < 100; i++)
			{
				multiplication(c, c, &c);
				addition(c, t, &c);
				if (c.re > 2 || c.im > 2)
					break;
			}
			if (i == 100)
				fprintf(pgmimg, "%d ", 255);
			else
				fprintf(pgmimg, "%d ", 0);
		}
		fprintf(pgmimg, "\n");
	}
	fclose(pgmimg);
}
