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
			for (i = 1; i < 50; i++)
			{
				multiplication(z, z, &z);
				addition(z, c, &z);
				if (z.re > 2 || z.im > 2)
					break;
			}
			if (i == 50)
				fprintf(name, "%d ", 255);
			else
				fprintf(name, "%d ", 0);
		}
		fprintf(name, "\n");
	}
	fclose(name);
}
