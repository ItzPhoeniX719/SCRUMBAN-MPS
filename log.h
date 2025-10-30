#ifndef LOG_H_
#define LOG_H_

/*

Cada vez que se realice una operación registrar hora, 
tipo de operación, error E/S.

Formato: [hora, motivo, OK/ERROR]

*/

void matrixLog(const char* motivo, int estado);


#endif // LOG_H_