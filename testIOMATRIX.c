#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "IOMATRIX.h"
#include "OPMATRIX.h"

//Función para inicializar una matriz secuencial (más fácil de verificar)
void test_matrixInit(Matriz *m) {
    int val = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            m->mat[i][j] = val++;
        }
    }
}

//Función de prueba
void test_matrixTest() {
    Matriz original, cargada;

    printf("Inicializando matriz con valores aleatorios...\n");
    test_matrixInit(&original);

    printf("Matriz original:\n");
    matrixPrint(original);

    // Guardar en archivo
    matrixSave(original, "testMatrixIO.txt");
    printf("\nMatriz guardada en 'testMatrixIO.txt'\n");

    // Cargar desde archivo
    cargada = matrixLoad("testMatrixIO.txt");
}

int main() {
    if(test_matrixTest()){
        printf("[IOMATRIX] OK");
    }else{
        printf("[IOMATRIX] ERROR");
    }

    return 0;
}
