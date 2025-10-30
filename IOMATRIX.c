#include <stdio.h>
#include "IOMATRIX.h"
#include "OPMATRIX.h"

Matriz matrixLoad(const char* filename){
    FILE* f;
    f = fopen(filename, "r");
    if(f == NULL){
        log("Error al abrir el fichero", 1);
        exit;
    }

    Matriz m;               //Matriz resultante
    int i = 0;  int j = 0;
    for(i; i<5; i++){
        for(j; j<5; j++){
            if(fscanf(f, "%d", &m.mat[i][j]) != 1){
                //error
                exit;
            }
        }
    }

    fclose(f);
    //LOG: carga matriz OK
    return m;
}

void matrixSave(Matriz m, const char* filename){
    FILE* f;
    f = fopen(filename, "w");
    if(f == NULL){
        //error
        exit;
    }

    int i = 0; int j = 0;
    for(i; i<5; i++){
        for(j; j<5; j++){
            fprintf(f, "%d ", m.mat[i][j]);
        }
        fprintf(f, "\n");
    }

    fclose(f);
    //LOG: guardar matriz OK
}

void matrixPrint(const Matriz m){
    int i = 0; int j = 0;
    for(i; i<5; i++){
        for(j; j<5; j++){
            printf("%d ", m.mat[i][j]);
        }
        printf("\n");
    }
    //LOG: imprimir matriz OK
}

