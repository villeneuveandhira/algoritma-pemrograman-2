/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 2
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

// Matriks bungkusan:
typedef struct {
    char nama[99];
    int atk, def;
    int overall;
} tim;

// Deklarasi fungsi:
void spasi(int panjang);
void cetakDrawing(int m, int n, char judul[99], tim basket[m][n], int panjang[2][n], int x);