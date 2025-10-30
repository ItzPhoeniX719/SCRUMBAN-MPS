#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IOMATRIX.h"
#include "OPMATRIX.h"

Matriz suma(Matriz A, Matriz B);
Matriz resta(Matriz A, Matriz B);
Matriz productoEscalar(int escalar, Matriz A);
Matriz producto(Matriz A, Matriz B);
Matriz matrixLoad(const char* filename);
void matrixSave(const Matriz m, const char* filename);
void matrixPrint(const Matriz m);

#define N 5

int main(){
    int opcion, k, i, j, modo;
    Matriz A, B, R;
    char ficheroA[100], ficheroB[100];
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

        if(opcion >= 1 && opcion <= 4){
            printf("\nSelecciona el modo de entrada de las matrices:\n");
            printf("1. Introducir manualmente\n");
            printf("2. Cargar desde ficheros\n");
            printf("Opción: ");
            scanf("%d", &modo);

            if(modo == 1){//Carga manual
                printf("\nIntroduce los elementos de la matriz A:\n");
                int i = 0, j = 0;
                for (i = 0; i < 5; i++)
                    for (j = 0; j < 5; j++)
                    {
                        printf("A[%d][%d]: ", i, j);
                        scanf("%d", &A.mat[i][j]);
                    }

                if (opcion != 4){
                printf("\nIntroduce los valores de la matriz B:\n");
                int i = 0, j = 0;
                for (i = 0; i < 5; i++)
                    for ( j = 0; j < 5; j++)
                    {
                        printf("B[%d][%d]: ", i, j);
                        scanf("%d", &B.mat[i][j]);
                    }
                }
            }else if(modo == 2){
                // --- Entrada desde fichero ---
                printf("\nIntroduce el nombre del fichero de la matriz A: ");
                scanf("%s", ficheroA);
                A = matrixLoad(ficheroA);  

            if (opcion != 4)
            {
                printf("Introduce el nombre del fichero de la matriz B: ");
                scanf("%s", ficheroB);
                B = matrixLoad(ficheroB);
            }
            }
            else
            {
                printf("Opción de modo no válida. Volviendo al menú principal...\n");
                continue;
            }

        }
    

        switch (opcion){
            case 1:
                R = suma(A, B);
                printf("\n--- Resultado de la suma ---\n");
                matrixPrint(R);
                break;
            case 2:
                R = resta(A, B);
                printf("\n--- Resultado de la resta ---\n");
                matrixPrint(R);
                break;
            case 3:
                R = producto(A, B);
                printf("\n--- Resultado de la multiplicacion ---\n");
                matrixPrint(R);
                break;
            case 4:
                R = productoEscalar(k, A);
                printf("\n--- Resultado del producto escalar ---\n");
                matrixPrint(R);
                break;
        }
    } while (opcion != 5);
    
    return 0;
}
