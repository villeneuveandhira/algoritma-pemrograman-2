#include <stdio.h>
#include <string.h>

typedef struct {
    char nim[10];
    char nama[100];
    char nilai[2];
} nilaiMatKul;

int main() {
    nilaiMatKul rekaman;
    FILE *arsipMatKul;
    arsipMatKul = fopen("ArsipMatKul.dat", "r");
    printf("isi arsip beruntun adalah : \n");
    fscanf(arsipMatKul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);

    if (strcmp(rekaman.nim, "XXXXXXXX") == 0) {
        printf("arsip kosong\n");
    } else {
        do {
            /* proses */
            printf("nim : %s\n", rekaman.nim);
            printf("nama : %s\n", rekaman.nama);
            printf("nilai : %s\n", rekaman.nilai);
            printf("-----------------\n");

            /* iterasi */
            fscanf(arsipMatKul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
        } while (strcmp(rekaman.nim, "XXXXXXXX") != 0);
    }

    fclose(arsipMatKul);

    return 0;
}