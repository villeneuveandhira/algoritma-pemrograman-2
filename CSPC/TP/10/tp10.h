/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 10
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

// deklarasi variabel global
int idx,
    wlen;
char cw[52];

// deklarasi fungsi/prosedur
void start(char str[]);
void reset();
int eop(char str[]);
void inc(char str[]);
int getlen();
char *getcw();
void selection_Sort(int n, char arr[101][101]);
void print_Pendek(int n, char arr[101][101]);
void print_Menengah(int n, char arr[101][101]);
void print_Panjang(int n, char arr[101][101]);