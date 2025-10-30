#ifndef OPMATRIX_H_
#define OPMATRIX_H_

typedef struct  
{
    int mat[5][5];
} Matriz;

// Devuelve la suma la matriz A y B
Matriz suma(Matriz A, Matriz B);

// Devuelve la resta la matriz A y B
Matriz resta(Matriz A, Matriz B);

Matriz productoEscalar(int escalar, Matriz A);

Matriz producto(Matriz A, Matriz B);


#endif // OPMATRIX_H_