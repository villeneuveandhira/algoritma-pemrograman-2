/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 1
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// function untuk menyalin matriks
void salin_matriks(int x, int y, char matriks_awal[][99], char matriks_akhir[][99]) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            matriks_akhir[i][j] = matriks_awal[i][j];
        }
    }
}

// function untuk menampilkan matriks hasil
void print_matriks(int x, int y, char matriks_akhir[][99]) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%c", matriks_akhir[i][j]);
            if (j < y - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// function swap untuk menukar nilai a dan b
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// function transpose matriks
void transpose(int x, int y, char matriks_awal[][99], char matriks_akhir[][99]) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            matriks_akhir[j][i] = matriks_awal[i][j];
        }
    }
}

// function refleksi kiri dan kanan
void mirror_lr(int x, int y, char matriks_awal[][99], char matriks_akhir[][99]) {
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            matriks_akhir[i][j] = matriks_awal[i][(x - 1) - j];  // menukar kolom matriks bersebrangan
        }
    }
}

// function refleksi atas dan bawah
void mirror_ud(int x, int y, char matriks_awal[][99], char matriks_akhir[][99]) {
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            matriks_akhir[i][j] = matriks_awal[(y - 1) - i][j];  // menukar baris matriks bersebrangan
        }
    }
}