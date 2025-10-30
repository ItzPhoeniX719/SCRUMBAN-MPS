#include "OPMATRIX.h"

Matriz suma(Matriz A, Matriz B)
{
    int i, j;
    Matriz res;

    for (i = 0; i < 5; ++i)
        for (j = 0; j < 5; ++j)
            res.mat[i][j] = A.mat[i][j] + B.mat[i][j];

    return res;
}

Matriz resta(Matriz A, Matriz B)
{
    int i, j;
    Matriz res;

    for (i = 0; i < 5; ++i)
        for (j = 0; j < 5; ++j)
            res.mat[i][j] = A.mat[i][j] - B.mat[i][j];

    return res;
}

Matriz productoEscalar(int escalar, Matriz A)
{
    int i, j;
    Matriz res;

    for (i = 0; i < 5; ++i)
        for (j = 0; j < 5; ++j)
            res.mat[i][j] = A.mat[i][j]*escalar;

    return res;
}

Matriz producto(Matriz A, Matriz B)
{
    Matriz res;
    int i, j, k;

    for (i = 0; i < 5; ++i)
        for (j = 0; j < 5; ++j) 
        {
            res.mat[i][j] = 0;
            for (k = 0; k < 5; ++k)
                res.mat[i][j] += A.mat[i][k] * B.mat[k][j];
        }

    return res;
}