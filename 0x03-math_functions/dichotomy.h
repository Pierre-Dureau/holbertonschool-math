#ifndef DICHOTOMY_H
#define DICHOTOMY_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct s_cell - singly linked list
 * @elt: value
 * @next: points to the next node
 */
typedef struct s_cell
{
	double elt;
	struct s_cell *next;
} t_cell;

t_cell *dichotomy(double a, double b);

#endif /* DICHOTOMY_H */
