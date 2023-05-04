/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 4
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

// Matriks bungkusan
typedef struct
{
    char judul[99], genre[99];
    float rating;
} film;

// Deklarasi function
void length(int n, film arr[], int* maxJudul, int* maxGenre);
void printS(char s, int n);
void printArr(int n, film arr[]);
void insertion(int n, film arr[], int patokan, int sc);
void selection(int n, film arr[], int patokan, int sc);