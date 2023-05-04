#include <stdio.h>

// MENGISI MATRIKS:
/*
int main() {
    int matriks1[4][6];
    int matriks2[4][6];

    int baris;
    int kolom;

    for (baris = 0; baris < 4; baris++) {
        for (kolom = 0; kolom < 6; kolom++) {
            printf("masukkan angka:\n");
            scanf("%d", &matriks1[baris][kolom]);
            printf("\n");
        }
    }

//MENAMPILKAN ELEMEN MATRIKS:
    //  for (baris = 0; baris < 4; baris++) {
    //      for (kolom = 0; kolom < 6; kolom++) {
    //          printf("%d ", matriks[baris][kolom]);
    //      }
    //      printf("\n");
    //  }

// SALIN MATRIKS:
    // for (baris = 0; baris < 4; baris++) {
    //     for (kolom = 0; kolom < 6; kolom++) {
    //         matriks2[baris][kolom] = matriks1[baris][kolom];
    //     }
    // }

    return 0;
}
*/

// PENJUMLAHAN MATRIKS:
/*
int main() {
    int matriks[3][2];
    int matriks2[3][2];
    int hasil[3][2];

    int baris, kolom;

    printf("Matriks pertama\n");
    for (baris = 0; baris < 3; baris++) {
        printf("Masukkan angka baris %d:\n", baris + 1);
        for (kolom = 0; kolom < 2; kolom++) {
            scanf("%d", &matriks[baris][kolom]);
        }
    }

    printf("Matriks kedua\n");
    for (baris = 0; baris < 3; baris++) {
        printf("Masukkan angka baris %d:\n", baris + 1);
        for (kolom = 0; kolom < 2; kolom++) {
            scanf("%d", &matriks2[baris][kolom]);
        }
    }

    // operasi matriks:
    printf("hasil penjumlahan matriks\n");
    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 2; kolom++) {
            hasil[baris][kolom] = matriks[baris][kolom] + matriks2[baris][kolom];
            printf("%d ", hasil[baris][kolom]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
*/

// PERKALIAN MATRIKS:
/*
int main() {
    int matriks[3][2];
    int matriks2[3][2];
    int matriks3[3][3];

    int baris, kolom, x;

    printf("Matriks pertama\n");
    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 2; kolom++) {
            printf("Masukkan angka:\n");
            scanf("%d", &matriks[baris][kolom]);
            printf("\n");
        }
    }

    printf("Matriks kedua\n");
    for (baris = 0; baris < 2; baris++) {
        for (kolom = 0; kolom < 3; kolom++) {
            printf("Masukkan angka:\n");
            scanf("%d", &matriks2[baris][kolom]);
            printf("\n");
        }
    }

    // perkalian matriks:
    printf("Hasil perkalian\n");

    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 3; kolom++) {
            matriks3[baris][kolom] = 0;
            for (x = 0; x < 2; x++) {
                matriks3[baris][kolom] = matriks3[baris][kolom] + (matriks[baris][x] * matriks2[x][kolom]);
            }
            printf("%d ", matriks3[baris][kolom]);
        }
        printf("\n");
    }

    return 0;
}
*/