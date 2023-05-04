#include <stdio.h>
#include <string.h>

typedef struct {
    char nim[10];
    char nama[100];
    char nilai[3];
} nilaiMatKul;

int main() {
    int n = 0;
    nilaiMatKul temp[99];
    nilaiMatKul rekaman, baru;

    FILE *arsipMatKul;
    arsipMatKul = fopen("ArsipMatKul.dat", "r");

    // read & array
    printf("mulai proses memasukkan isi file ke array\n");
    fscanf(arsipMatKul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
    if (strcmp(rekaman.nim, "XXXX") == 0) {
        printf("arsip kosong\n");
    } else {
        do {
            strcpy(temp[n].nim, rekaman.nim);
            strcpy(temp[n].nama, rekaman.nama);
            strcpy(temp[n].nilai, rekaman.nilai);
            n++;
            fscanf(arsipMatKul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
        } while (strcmp(rekaman.nim, "XXXX") != 0);
    }
    fclose(arsipMatKul);

    // input
    printf("proses memasukkan data baru\n");
    printf("masukkan nim: ");
    scanf("%s", &baru.nim);
    printf("masukkan nama: ");
    scanf("%s", &baru.nama);
    printf("masukkan nilai: ");
    scanf("%s", &baru.nilai);

    // memasukkan data baru ke dalam array
    if (strcmp(baru.nim, temp[0].nim) < 0) {  // rekaman baru di depan
        // geser semua isi array +1
        for (int i = (n - 1); i >= 0; i--) {
            strcpy(temp[i + 1].nim, temp[i].nim);
            strcpy(temp[i + 1].nama, temp[i].nama);
            strcpy(temp[i + 1].nilai, temp[i].nilai);
        }
        n++;
        strcpy(temp[0].nim, baru.nim);
        strcpy(temp[0].nama, baru.nama);
        strcpy(temp[0].nilai, baru.nilai);
    } else if (strcmp(baru.nim, temp[n - 1].nim) > 0) {  // rekaman baru di belakang
        strcpy(temp[n].nim, baru.nim);
        strcpy(temp[n].nama, baru.nama);
        strcpy(temp[n].nilai, baru.nilai);
        n++;
    } else {  // rekaman baru posisi tengah
        int i = 0;
        int stop = 0;
        while ((i < n) && (stop == 0)) {
            if (strcmp(temp[i].nim, baru.nim) > 0) {
                stop = 1;
            } else {
                i++;
            }
        }
        for (int j = (n - 1); j >= 1; j--) {
            strcpy(temp[j + 1].nim, temp[j].nim);
            strcpy(temp[j + 1].nama, temp[j].nama);
            strcpy(temp[j + 1].nilai, temp[j].nilai);
        }
        strcpy(temp[i].nim, baru.nim);
        strcpy(temp[i].nama, baru.nama);
        strcpy(temp[i].nilai, baru.nilai);
        n++;
    }

    // flush file
    arsipMatKul = fopen("ArsipMatkul.dat", "w");
    for (int i = 0; i < n; i++) {
        fprintf(arsipMatKul, "%s %s %s\n", temp[i].nim, temp[i].nama, temp[i].nilai);
    }
    fprintf(arsipMatKul, "%s %s %s\n", "XXXX", "XXX", "X");
    fclose(arsipMatKul);

    return 0;
}