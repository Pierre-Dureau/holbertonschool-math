#!/usr/bin/env python3

import numpy as np


def vector(A, b):
    # Creation of Augmented matrix
    b = np.expand_dims(b, axis=1)
    a = np.concatenate((A, b), axis=1)
    row, col = np.shape(a)

    if a[0][0] == 0:
        print("You can't divide by zero!")
        return None

    # Gaussian elimination
    for i in range(1, row):
        if a[i][i] == 0:
            print("You can't divide by zero!")
            return None

        for j in range(i, row):
            m = -a[j][i - 1] / a[i - 1][i - 1]
            for k in range(0, col):
                a[j][k] += a[i - 1][k] * m

    if a[i][i] == 0:
        print("You can't divide by zero!")
        return None

    # Back substitution
    x = np.zeros(k)
    for s in range(i, -1, -1):
        if s == i:
            t = a[i][k] / a[i][i]
            for y in range(s - 1, -1, -1):
                a[y][s] *= t
            x[s] = float("{0:.8f}".format(t))
        else:
            col = k - 1
            while col != s:
                a[s][k] -= a[s][col]
                col -= 1
            t = a[s][k] / a[s][s]
            for y in range(s - 1, -1, -1):
                a[y][s] *= t
            x[s] = float("{0:.8f}".format(t))

    return x


def invers(A, b):

    a = np.concatenate((A, b), axis=1)

    row, col = np.shape(a)

    if a[0][0] == 0:
        print("You can't divide by zero!")
        return None

    # Gaussian elimination
    for i in range(0, row):
        if a[i][i] == 0:
            print("You can't divide by zero!")
            return None

        for j in range(0, row):
            if j != i:
                m = -a[j][i] / a[i][i]
                for k in range(0, col):
                    a[j][k] += a[i][k] * m

    if a[i][i] == 0:
        print("You can't divide by zero!")
        return None

    for i in range(0, row):
        for j in range(row, k + 1):
            a[i][j] /= a[i][i]

    for d in range(0, 3):
        a = np.delete(a, 0, 1)

    return a


def gaussian_elimination(A, b):

    if np.shape(A) != np.shape(b):
        return vector(A, b)
    else:
        return invers(A, b)
