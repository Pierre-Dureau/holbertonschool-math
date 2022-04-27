#!/usr/bin/env python3
def gaussian_elimination(A, b):

    import numpy as np

    try:
        return np.linalg.solve(A, b)
    except:
        print("You can't divide by zero!")
        return None
