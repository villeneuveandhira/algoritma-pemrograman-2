#include <stdio.h>
#include <string.h>

typedef struct {
    char nim[10];
    char nama[100];
    char nilai[3];
} nilaiMatKul;

int main() {
    nilaiMatKul rekaman;

    FILE *arsipMatKul1;
    FILE *arsipMatKul2;
    arsipMatKul1 = fopen("ArsipMatKul.dat", "r");
    arsipMatKul2 = fopen("ArsipMatKul-copy.dat", "w");

    printf("mulai proses menyalin  file\n");

    fscanf(arsipMatKul1, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);

    if (strcmp(rekaman.nim, "XXXX") == 0) {
        fprintf(arsipMatKul2, "%s %s %s\n", "XXXX", "XXX", "X");
    } else {
        while (strcmp(rekaman.nim, "XXXX") != 0) {
            fprintf(arsipMatKul2, "%s %s %s\n", rekaman.nim, rekaman.nama, rekaman.nilai);
            fscanf(arsipMatKul1, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
        }
        fprintf(arsipMatKul2, "%s %s %s\n", "XXXX", "XXX", "X");
    }
    printf("proses menyalin file selesai\n");
    fclose(arsipMatKul1);
    fclose(arsipMatKul2);

    return 0;
}