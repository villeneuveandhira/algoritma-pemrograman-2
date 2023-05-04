/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 8
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

// struct data
typedef struct {
    char judul[99];
    char sutradara[99];
    char genre[99];
    char bioskop[99];
} film;
typedef struct {
    char kode[99];
    char nama[99];
} code;

// function declaration
void bin_Search(code data[], int n, char search[]);
void print_S(char s, int n);
void print_Data(int n, film data[]);
