#include <stdio.h>

int main() {
    int baris, kolom;
    int matriks[3][3];

    printf("MATRIKS[3][3]\n");
    int i = 1;
    for (baris = 0; baris < 3; baris++) {
        printf("Masukkan angka baris ke-%d\n", i++);
        for (kolom = 0; kolom < 3; kolom++) {
            scanf("%d", &matriks[baris][kolom]);
        }
    }

    printf("MATRIKS[3][3]\n");
    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 3; kolom++) {
            printf("%d ", matriks[baris][kolom]);
        }
        printf("\n");
    }

    int find;
    printf("Mencari letak angka baris-kolom\n");
    scanf("%d", &find);
    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 3; kolom++) {
            if (find == matriks[baris][kolom]) {
                printf("Baris: %d\nKolom: %d\n", baris + 1, kolom + 1);
            }
        }
    }
    return 0;
}