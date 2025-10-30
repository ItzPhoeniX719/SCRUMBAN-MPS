#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "IOMATRIX.h"
//#include "OPMATRIX.h"

#define N 5

int main(){
    int opcion, metodo;
    char logFile[] = "logs/matrix_log.txt";

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
        printf("3. Producto escalar (R = k * A)\n");
        printf("4. Multiplicacion de matrices (R = A * B)\n");
        printf("5. Salir\n");
        scanf("%d", &opcion);


        switch (opcion){
            case 1:
                //suma(A, B);
                printf("Suma de matrices seleccionada.\n");
                break;
            case 2:
                //resta(A, B);
                printf("Resta de matrices seleccionada.\n");
                break;
            case 3:
                //productoEscalar(k, A);
                printf("Producto escalar seleccionado.\n");
                break;
            case 4:
                //producto(A, B);
                printf("Multiplicacion de matrices seleccionada.\n");
                break;
        }
    } while (opcion != 5);
    
    return 0;
}