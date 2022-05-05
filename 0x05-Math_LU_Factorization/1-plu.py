#!/usr/bin/python3

import numpy as np

def plu(a):
    a = a.astype(float)
    row, col = np.shape(a)

    P = np.zeros(np.shape(a))
    L = np.zeros(np.shape(a))
    for i in range(0, col):
        L[i][i] = 1

    i = 0
    while i < col:
        if a[i][i] == 0:
            P[i + 1][i] = 1
            P[i][i + 1] = 1
            i += 1
        else:
            P[i][i] = 1
        i += 1

    a = P @ a
    U = np.copy(a)

    if U[0][0] == 0:
        print("You can't divide by zero!")
        return None

    for i in range(1, row):
        if U[i][i] == 0:
            print("You can't divide by zero!")
            return None

        for j in range(i, row):
            m = -U[j][i - 1] / U[i - 1][i - 1]
            L[j][i - 1] = -m
            for k in range(0, col):
                U[j][k] += U[i - 1][k] * m

    return P, L, U
