/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal kuis nomor 2
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// function untuk menghitung deret
void hitung(int n, int a, int b, int c) {
    printf("%d %d %d", a, b, c);
    if (n != 0) {
        printf(" ");
        /*
        posisi 1 tidak mengalami apapun,
        posisi 2 bilangan dikalikan dengan dirinya,
        dan posisi 3 penjumlahan posisi 2 dengan posisi 3 sebelumnya.
        */
        hitung(n - 1, a, b * b, b * b + c);
    }
}