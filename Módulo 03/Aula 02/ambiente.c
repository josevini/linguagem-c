#include <stdio.h>
#include <time.h>

void main() {
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int d = data->tm_mday;
    int m = data->tm_mon + 1;
    int a = data->tm_year + 1900;
    printf("Estamos no dia %d, no mes %d e no ano de %d", d, m);
}
