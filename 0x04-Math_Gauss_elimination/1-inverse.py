#!/usr/bin/env python

import numpy as np
gaussian_elimination = __import__('0-gaussian_elimination').gaussian_elimination

if __name__ == "__main__":

    def inverse(A):

        return np.linalg.inv(A)

    A = np.zeros((4, 4))
    A[2, 0] = 1
    A[0, 1] = 1
    A[1, 3] = 1
    A[3, 2] = 1
    print("The matrix A:\n", A)
    print("The inverse of the matrix A:\n", inverse(A))
    print("The identity matrix (The matrix A x The inverse of the matrix A): \n", A @ inverse(A))
