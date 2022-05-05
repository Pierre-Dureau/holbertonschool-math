#!/usr/bin/python3

import numpy as np

def lu(a):
    a = a.astype(float)
    L = np.zeros(np.shape(a))
    U = np.copy(a)
    row, col = np.shape(U)
    for i in range(0, col):
        L[i][i] = 1

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

    return L, U
