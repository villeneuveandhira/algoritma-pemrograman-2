/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 2
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// function untuk memisahkan antar tim dengan spasi
void spasi(int panjang) {
    for (int i = 0; i < panjang; i++) {
        printf(" ");
    }
}

// function untuk menampilkan keluaran matriks bungkusan
void cetakDrawing(int m, int n, char judul[99], tim basket[m][n], int panjang[2][n], int x) {
    printf("%s:\n", judul);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%s", basket[i][j].nama);
            if (j < n - 1) {
                // Kondisi panjang matriks saat ini lebih kecil dari matriks(kolom) terpanjang
                if (strlen(basket[i][j].nama) < panjang[x][j]) {
                    spasi(panjang[x][j] - strlen(basket[i][j].nama));
                }
                spasi(2);
            }
        }
        printf("\n");
    }
}