#include <stdio.h>
#include <string.h>

typedef struct {
    char nim[10];
    char nama[100];
    char nilai[2];
} nilaiMatKul;

int main() {
    nilaiMatKul rekaman;

    // open file
    FILE *arsipMatKul1;
    FILE *arsipMatKul2;
    FILE *arsipMatKul3;
    arsipMatKul1 = fopen("ArsipMatKul1.dat", "r");
    arsipMatKul2 = fopen("ArsipMatKul2.dat", "r");
    arsipMatKul3 = fopen("ArsipMatKul3.dat", "w");

    printf("mulai proses penggabungan file\n");

    // arsip 1
    fscanf(arsipMatKul1, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
    while (strcmp(rekaman.nim, "XXXXXX") != 0) {
        fprintf(arsipMatKul3, "%s %s %s\n", rekaman.nim, rekaman.nama, rekaman.nilai);
        fscanf(arsipMatKul1, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
    }
    // arsip2
    fscanf(arsipMatKul2, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
    while (strcmp(rekaman.nim, "XXXXXX") != 0) {
        fprintf(arsipMatKul3, "%s %s %s\n", rekaman.nim, rekaman.nama, rekaman.nilai);
        fscanf(arsipMatKul2, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
    }
    fprintf(arsipMatKul3, "%s %s %s\n", "XXXXXX", "XXX", "X");
    printf("proses penggabungan file selesai\n");

    // close file
    fclose(arsipMatKul1);
    fclose(arsipMatKul2);
    fclose(arsipMatKul3);

    return 0;
}