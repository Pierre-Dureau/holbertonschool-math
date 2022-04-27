#!/usr/bin/env python3
def gaussian_elimination(A, b):

    import numpy as np
    import numpy.linalg as det

    try:
        det(A)
    except:
        print("You can't divide by zero!")
        return None

    return np.linalg.solve(A, b)
