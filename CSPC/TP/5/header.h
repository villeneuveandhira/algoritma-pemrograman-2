/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 5
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

// Deklarasi struct
typedef struct {
    char judul[99];
    int jam, menit, detik;
} film;

// Deklarasi function
void printS(char s, int n);
void printArray(int n, film arr[]);
void bubbleSort(int n, film arr[], int x);
void quickSort(int n, film arr[], int l, int r, int x);