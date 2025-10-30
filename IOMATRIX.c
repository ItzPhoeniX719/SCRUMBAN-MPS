#include "IOMATRIX.h"

Matriz matrixLoad(const char* filename){
    FILE* f;
    f = fopen(filename, "r");
    if(f == NULL){
        //error;
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

    return m;
}
