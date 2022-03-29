#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct s_cell - singly linked list
 *
 * @elt: Int number
 * @next: Points to the next node
 */
typedef struct s_cell
{
	int elt;
	struct s_cell *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif /* FIBONACCI_H */
