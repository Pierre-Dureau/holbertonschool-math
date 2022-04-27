#!/usr/bin/env python

import numpy as np
gaussian_elimination = __import__('0-gaussian_elimination').gaussian_elimination

if __name__ == "__main__":

    def inverse(A):
        B = np.zeros(np.shape(A))
        row, col = np.shape(B)

        i = 0
        for i in range(0, col):
            B[i][i] = 1

        A1 = gaussian_elimination(A, B)

        return A1

    A = [[-3, 2, -1], [6, -6, 7], [3, -4, 4]]
    print("The matrix A:\n", A)
    print("The inverse of the matrix A:\n", inverse(A))
    print("The identity matrix (The matrix A x The inverse of the matrix A): \n", A @ inverse(A))
