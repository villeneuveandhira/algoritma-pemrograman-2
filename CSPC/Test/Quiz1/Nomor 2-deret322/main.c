/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal kuis nomor 2
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Program
int main() {
    // tiga angka deret awal:
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // angka banyak kali deret tiga yang dibutuhkan:
    int x;
    scanf("%d", &x);

    // deret tiga:
    hitung(x, a, b, c);
    printf("\n");

    return 0;
}