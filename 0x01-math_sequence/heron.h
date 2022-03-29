#ifndef HERON_H
#define HERON_H

#include <stdlib.h>

/**
 * struct s_cell - singly linked list
 *
 * @elt: Double number
 * @next: Points to the next node
 */
typedef struct s_cell
{
	double elt;
	struct s_cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif /* HERON_H */
