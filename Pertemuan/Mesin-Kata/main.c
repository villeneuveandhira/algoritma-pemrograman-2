#include <stdio.h>

#include "kata.h"

int main() {
    char pita[300];
    int jkata = 0;
    printf("masukkan pada kalimat pada pita\n");
    scanf("%299[^\n]s", &pita);

    STARTKATA(pita);
    while (EOPKATA(pita) == 0) {
        jkata++;
        INCKATA(pita);
    }

    if (GETPANJANGKATA() > 0) {
        jkata++;
    }
    printf("%d\n", jkata);
    return 0;
}