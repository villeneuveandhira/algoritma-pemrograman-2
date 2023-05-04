/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal kuis nomor 1
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// function untuk mengalikan matriks kecil di matriks besar dan ditampilkan
void cetak(int x_Awal, int y_Awal, int kecil_Baris, int kecil_Kolom, int besar_Baris, int besar_Kolom, pecahan matriks_Kecil[99][99], pecahan matriks_Besar[99][99]) {
    int x = x_Awal, y;
    for (int i = 0; i < kecil_Baris; i++) {
        y = y_Awal;  // reset setiap kolom
        for (int j = 0; j < kecil_Kolom; j++) {
            matriks_Besar[x][y].pembilang *= matriks_Kecil[i][j].pembilang;
            matriks_Besar[x][y].penyebut *= matriks_Kecil[i][j].penyebut;
            y++;
        }
        x++;
    }

    for (int i = 0; i < besar_Baris; i++) {
        for (int j = 0; j < besar_Kolom; j++) {
            printf("%d %d\n", matriks_Besar[i][j].pembilang, matriks_Besar[i][j].penyebut);
        }
    }
}