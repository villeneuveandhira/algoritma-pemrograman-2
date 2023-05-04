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
    arsipMatKul = fopen("ArsipMatKul.dat", "w");
    printf("Tuliskan rekaman satu per satu:\n");
    printf("masukkan nim:\n");
    scanf("%s", &rekaman.nim);

    while (strcmp(rekaman.nim, "XXXXXXXX") != 0) {
        /* proses */
        printf("masukkan nama : \n");
        scanf("%s", &rekaman.nama);
        printf("masukan nilai : \n");
        scanf("%s", &rekaman.nilai);

        fprintf(arsipMatKul, "%s %s %s\n", rekaman.nim, rekaman.nama, rekaman.nilai);

        /* iterasi */
        printf("masukkan nim : \n");
        scanf("%s", &rekaman.nim);
    }

    fprintf(arsipMatKul, "%s %s %s\n", "XXXXXXXX", "XXX", "X");
    fclose(arsipMatKul);

    return 0;
}