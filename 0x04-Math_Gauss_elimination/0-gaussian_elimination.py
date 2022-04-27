#!/usr/bin/env python3

import numpy as np


def vector(A, b):
    # Creation of Augmented matrix
    try:
        return (np.linalg.solve(A, b))
    except:
        return None


def invers(A, b):

    a = np.concatenate((A, b), axis=1)

    row, col = np.shape(a)
    k = 0

    # Gaussian elimination
    for i in range(0, row):

        for j in range(0, row):

            if j != i:
                if a[i][i] != 0:
                    m = -a[j][i] / a[i][i]

                for k in range(0, col):
                    a[j][k] += a[i][k] * m

    for i in range(0, row):
        for j in range(row, k + 1):
            a[i][j] /= a[i][i]

    for d in range(0, row):
        a = np.delete(a, 0, 1)

    return a


def gaussian_elimination(A, b):

    if np.shape(A) != np.shape(b):
        return vector(A, b)
    else:
        return invers(A, b)
