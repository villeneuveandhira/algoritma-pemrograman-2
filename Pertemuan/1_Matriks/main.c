#include <stdio.h>

/* Nomor 1 */
int main() {
    int matriks1[3][2];
    int matriks2[3][2];
    int hasil[3][2];

    int baris, kolom;

    printf("Matriks pertama\n");
    for (baris = 0; baris < 2; baris++) {
        for (kolom = 0; kolom < 2; kolom++) {
            printf("Masukkan angka baris:\n");
            scanf("%d", &matriks1[baris][kolom]);
        }
    }
    for (baris = 0; baris < 2; baris++) {
        for (kolom = 0; kolom < 2; kolom++) {
            printf("%d ", matriks1[baris][kolom]);
        }
        printf("\n");
    }

    printf("Matriks kedua\n");
    for (baris = 0; baris < 2; baris++) {
        for (kolom = 0; kolom < 2; kolom++) {
            printf("Masukkan angka baris:\n");
            scanf("%d", &matriks2[baris][kolom]);
        }
    }
    for (baris = 0; baris < 2; baris++) {
        for (kolom = 0; kolom < 2; kolom++) {
            printf("%d ", matriks1[baris][kolom]);
        }
        printf("\n");
    }

    // operasi matriks:
    printf("hasil pengurangan matriks\n");
    for (baris = 0; baris < 2; baris++) {
        for (kolom = 0; kolom < 2; kolom++) {
            if (matriks1[baris][kolom] > matriks2[baris][kolom]) {
                hasil[baris][kolom] = matriks1[baris][kolom] - matriks2[baris][kolom];
            } else {
                hasil[baris][kolom] = matriks2[baris][kolom] - matriks1[baris][kolom];
            }
            printf("%d ", hasil[baris][kolom]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}