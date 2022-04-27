#!/usr/bin/env python3

def gaussian_elimination(A, b):

    import numpy as np

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
            f = -a[j][i - 1] / a[i - 1][i - 1]
            for k in range(0, col):
                a[j][k] += a[i - 1][k] * f

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
