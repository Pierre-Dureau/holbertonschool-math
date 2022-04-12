#include "holberton.h"

/**
 * JuliaSet - The Julia’s Set in a PGM file
 *
 * @name: File
 * @name1: Name of the file
 * @c: Complexe number used
 * @xmax: Width of the file in pixel
 * @ymax: Height of the file in pixel
 */

void JuliaSet(FILE *name, char name1[20], complex c, int xmax, int ymax)
{
	int x, y, i;
	complex z;

	name = fopen(name1, "wb");
	fprintf(name, "P2\n");
	fprintf(name, "%d %d\n", xmax, ymax);
	fprintf(name, "255\n");

	for (y = 0; y < ymax; y++)
	{
		for (x = 0; x < xmax; x++)
		{
			z.im = -2 + y * 0.004;
			z.re = -2 + x * 0.004;
			for (i = 1; i < 255; i++)
			{
				multiplication(z, z, &z);
				addition(z, c, &z);
				if (z.re > 2 || z.im > 2)
					break;
			}
			fprintf(name, "%d ", i);
		}
		fprintf(name, "\n");
	}
	fclose(name);
}

/**
 * main - check code
 *
 * Return: 0
 */

int main(void)
{
	FILE *name;
	complex c1 = {-0.625, 0.4};
	complex c2 = {0.285, 0};
	complex c3 = {0.285, 0.01};
	complex c4 = {-0.7269, 0.1889};
	complex c5 = {-0.835, 0.2321};
	complex c6 = {-0.70176, 0.3842};

	name = fopen("", "wb");

	JuliaSet(name, "julia1.pgm", c1, 1000, 1000);
	JuliaSet(name, "julia2.pgm", c2, 1000, 1000);
	JuliaSet(name, "julia3.pgm", c3, 1000, 1000);
	JuliaSet(name, "julia4.pgm", c4, 1000, 1000);
	JuliaSet(name, "julia5.pgm", c5, 1000, 1000);
	JuliaSet(name, "julia6.pgm", c6, 1000, 1000);

	return (0);
}
