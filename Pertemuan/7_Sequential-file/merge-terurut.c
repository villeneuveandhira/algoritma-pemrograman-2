#include <stdio.h>
#include <string.h>

typedef struct {
    char nim[10];
    char nama[100];
    char nilai[2];
} nilaiMatKul;

int main() {
    nilaiMatKul rekaman1;
    nilaiMatKul rekaman2;

    // open file
    FILE *arsipMatKul1;
    FILE *arsipMatKul2;
    FILE *arsipMatKul3;
    arsipMatKul1 = fopen("ArsipMatKul1.dat", "r");
    arsipMatKul2 = fopen("ArsipMatKul2.dat", "r");
    arsipMatKul3 = fopen("ArsipMatKul4.dat", "w");

    printf("mulai proses penggabungan file\n");

    // merge (@file sudah urut)
    fscanf(arsipMatKul1, "%s %s %s\n", &rekaman1.nim, &rekaman1.nama, &rekaman1.nilai);
    fscanf(arsipMatKul2, "%s %s %s\n", &rekaman2.nim, &rekaman2.nama, &rekaman2.nilai);
    while ((strcmp(rekaman1.nim, "XXXXXX") != 0) && (strcmp(rekaman2.nim, "XXXXXX"))) {
        if ((strcmp(rekaman1.nim, rekaman2.nim) < 1)) {
            fprintf(arsipMatKul3, "%s %s %s\n", rekaman1.nim, rekaman1.nama, rekaman1.nilai);
            fscanf(arsipMatKul1, "%s %s %s\n", &rekaman1.nim, &rekaman1.nama, &rekaman1.nilai);
        } else {
            fprintf(arsipMatKul3, "%s %s %s\n", rekaman2.nim, rekaman2.nama, rekaman2.nilai);
            fscanf(arsipMatKul2, "%s %s %s\n", &rekaman2.nim, &rekaman2.nama, &rekaman2.nilai);
        }
    }
    // sisa
    while (strcmp(rekaman1.nim, "XXXXXX") != 0) {
        fprintf(arsipMatKul3, "%s %s %s\n", rekaman1.nim, rekaman1.nama, rekaman1.nilai);
        fscanf(arsipMatKul1, "%s %s %s\n", &rekaman1.nim, &rekaman1.nama, &rekaman1.nilai);
    }
    while (strcmp(rekaman2.nim, "XXXXXX") != 0) {
        fprintf(arsipMatKul3, "%s %s %s\n", rekaman2.nim, rekaman2.nama, rekaman2.nilai);
        fscanf(arsipMatKul2, "%s %s %s\n", &rekaman2.nim, &rekaman2.nama, &rekaman2.nilai);
    }
    fprintf(arsipMatKul3, "%s %s %s\n", "XXXXXX", "XXX", "X");
    printf("proses penggabungan file selesai\n");

    // close file
    fclose(arsipMatKul1);
    fclose(arsipMatKul2);
    fclose(arsipMatKul3);

    return 0;
}