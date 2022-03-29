#include "holberton.h"

/**
 * main - Create an image with the mandelbrot's set
 *
 */

int main(void)
{
	int x, y, i;
	double n = 250;
	int width = n * 4, height = n * 4;
	complex c, t;
	FILE *pgmimg;

	pgmimg = fopen("mandelbrot.pgm", "wb");
	fprintf(pgmimg, "P2\n");
	fprintf(pgmimg, "%d %d\n", width, height);
	fprintf(pgmimg, "255\n");

	for (y = 0; y < width; y++)
	{
		t.im = (y - width / 2 ) * 4.0 / width;
		for (x = 0; x < height; x++)
		{
			t.re = (x - width / 2) * 4.0 / width;
			c.re = 0;
			c.im = 0;
			for (i = 1; i < 255; i++)
			{
				multiplication(c, c, &c);
				addition(c, t, &c);
				if (c.re > 2 || c.im > 2)
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

	return (0);
}
