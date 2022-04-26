#ifndef NEWTON_H
#define NEWTON_H

#include <stdio.h>
#include <stdlib.h>

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

t_cell *newton(double a);
double _pow(double x, double y);
t_cell *add_node(t_cell **head, const double elt);
double f(double x);
double fp(double x);

#endif /* NEWTON_H */
