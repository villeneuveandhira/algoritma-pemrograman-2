/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 1
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>

// Deklarasi fungsi:
void salin_matriks(int x, int y, char matriks_awal[][99], char matriks_akhir[][99]);
void print_matriks(int x, int y, char matriks_akhir[][99]);
void swap(int *a, int *b);
void transpose(int x, int y, char matriks_awal[][99], char matriks_akhir[][99]);
void mirror_lr(int x, int y, char matriks_awal[][99], char matriks_akhir[][99]);
void mirror_ud(int x, int y, char matriks_awal[][99], char matriks_akhir[][99]);