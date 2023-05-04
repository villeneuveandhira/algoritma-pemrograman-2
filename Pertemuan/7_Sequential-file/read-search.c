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

    /* search */
    char kata_cari[10];
    printf("masukkan nim yang dicari : \n");
    scanf("%s", &kata_cari);

    fscanf(arsipMatKul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);

    if (strcmp(rekaman.nim, "XXXXXXXX") == 0) {
        printf("arsip kosong\n");
    } else {
        if (strcmp(kata_cari, "XXXXXXXX") == 0) {
            printf("tidak ditemukan\n");
        } else {
            while ((strcmp(rekaman.nim, "XXXXXXXX") != 0) && (strcmp(rekaman.nim, kata_cari) != 0)) {
                fscanf(arsipMatKul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
            }
            if (strcmp(rekaman.nim, kata_cari) == 0) {
                printf("nim : %s\n", rekaman.nim);
                printf("nama : %s\n", rekaman.nama);
                printf("nilai : %s\n", rekaman.nilai);
                printf("-----------------\n");
            } else {
                printf("tidak ditemukan\n");
            }
        }
    }
    fclose(arsipMatKul);

    return 0;
}