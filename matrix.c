#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "IOMATRIX.h"
#include "OPMATRIX.h"

Matriz suma(Matriz A, Matriz B);
Matriz resta(Matriz A, Matriz B);
Matriz productoEscalar(int escalar, Matriz A);
Matriz producto(Matriz A, Matriz B);

#define N 5

int main(){
    int opcion, k, i, j;
    Matriz A, B, R;
    //char logFile[] = "logs/matrix_log.txt";

    printf("===========================================\n");
    printf("|   BIENVENIDO A LA CALCULADORA MATRIX    |\n");
    printf("|      Operaciones con matrices 5x5       |\n");
    printf("===========================================\n\n");


    do
    {
        printf("\n========= MENU PRINCIPAL =========\n");
        printf("Introduce la operacion que deseas realizar:\n");
        printf("1. Suma de matrices (R = A + B)\n");
        printf("2. Resta de matrices (R = A - B)\n");
        printf("3. Multiplicacion de matrices (R = A * B)\n");
        printf("4. Producto escalar (R = k * A)\n");
        printf("5. Salir\n");
        scanf("%d", &opcion);

        if(opcion >= 1 && opcion <= 3){
            printf("Introduce los elementos de la matriz A:\n");
            for(i = 0; i < N; i++){
                for(j = 0; j < N; j++){
                    printf("A[%d][%d]: ", i, j);
                    scanf("%d", &A.mat[i][j]);
                }
            }

            printf("Matriz A ingresada:\n");
            printf("introduce los elementos de la matriz B:\n");
            for(i = 0; i < N; i++){
                for(j = 0; j < N; j++){
                    printf("B[%d][%d]: ", i, j);
                    scanf("%d", &B.mat[i][j]);
                }
            }
        }

        if(opcion == 4){
            printf("Introduce los elementos de la matriz A:\n");
            for(i = 0; i < N; i++){
                for(j = 0; j < N; j++){
                    printf("A[%d][%d]: ", i, j);
                    scanf("%d", &A.mat[i][j]);
                }
            }
            printf("Introduce el escalar k: ");
            scanf("%d", &k);
        }

        int i = 0; int j = 0;
        for(i; i<5; i++){
            for(j; j<5; j++){
                printf("%d ", R.mat[i][j]);
            }
            printf("\n");
        }

        switch (opcion){
            case 1:
                R = suma(A, B);
                printf("Suma de matrices seleccionada.\n");
                break;
            case 2:
                R = resta(A, B);
                printf("Resta de matrices seleccionada.\n");
                break;
            case 3:
                R = productoEscalar(k, A);
                printf("Producto escalar seleccionado.\n");
                break;
            case 4:
                R = producto(A, B);
                printf("Multiplicacion de matrices seleccionada.\n");
                break;
        }
    } while (opcion != 5);
    
    return 0;

}
