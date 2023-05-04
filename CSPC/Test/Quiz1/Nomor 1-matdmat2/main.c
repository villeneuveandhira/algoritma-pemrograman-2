/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal kuis nomor 1
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Program
int main() {
    int m1, n1, m2, n2;
    pecahan matriks_Pertama[99][99];
    pecahan matriks_Kedua[99][99];

    // banyaknya baris dan kolom dimensi matriks pertama:
    scanf("%d %d", &m1, &n1);
    // sebanyak barisxkolom baris isi matriks pertama:
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d %d", &matriks_Pertama[i][j].pembilang, &matriks_Pertama[i][j].penyebut);
        }
    }

    // banyaknya baris dan kolom dimensi matriks kedua:
    scanf("%d %d", &m2, &n2);
    // sebanyak barisxkolom baris isi matriks kedua:
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d %d", &matriks_Kedua[i][j].pembilang, &matriks_Kedua[i][j].penyebut);
        }
    }

    // posisi kiri atas matriks kecil di matriks besar:
    int x, y;
    scanf("%d %d", &x, &y);

    // isi matriks besar yang sudah dikalikan dengan matriks kecil:
    if ((m1 * n1) > (m2 * n2)) {
        cetak(x, y, m2, n2, m1, n1, matriks_Kedua, matriks_Pertama);
    } else {
        cetak(x, y, m1, n1, m2, n2, matriks_Pertama, matriks_Kedua);
    }

    return 0;
}