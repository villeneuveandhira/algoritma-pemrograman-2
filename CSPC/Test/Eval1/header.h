/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Evaluasi 1
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

// struct
typedef struct {
    char NIM[11];
    char nama[51];
    int nilai;
} mahasiswa;

// deklarasi function/prosedure
void print_Output(int n, mahasiswa arr[]);
void bubblesort_NIM(int n, mahasiswa arr[]);
void bubblesort_Nilai(int n, mahasiswa arr[]);
void merge_Terurut(int n, mahasiswa arr1[], int m, mahasiswa arr2[], mahasiswa arr3[]);