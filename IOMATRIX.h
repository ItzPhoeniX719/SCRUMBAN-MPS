#ifndef _IOMATRIX_H
#define _IOMATRIX_H

//Carga y guardado de matrices:
void matrixLoad(const char* filename);
void matrixSave(const Matriz m, const char* filename);
void matrixPrint(const Matriz m);

//Errores:
void errorHandler();

#endif // _IOMATRIX_H
