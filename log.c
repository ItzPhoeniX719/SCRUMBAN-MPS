#include <stdio.h>
#include <time.h>
#include "log.h"

void matrixLog(const char* motivo, int estado) {
    FILE *f = fopen("log.txt", "a");
    if (!f) return;

    time_t ahora = time(NULL);
    struct tm *tinfo = localtime(&ahora);
    char hora[9];
    strftime(hora, sizeof(hora), "%H:%M:%S", tinfo);

    const char* estadoStr = (estado == 0) ? "OK" : "ERROR";

    fprintf(f, "[%s, %s, %s]\n", hora, motivo, estadoStr);
    fclose(f);
}
