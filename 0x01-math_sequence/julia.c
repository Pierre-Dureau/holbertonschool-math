#include "holberton.h"

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
