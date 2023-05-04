/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 2
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Program
int main() {
    // Ukuran matriks bungkusan
    int m, n;  // banyak baris dan kolom
    scanf("%d %d", &m, &n);

    // Matriks bungkusan:
    tim basketawal[m][n];
    tim basketakhir[m][n];

    // Nama tim beserta nilai atk/def:
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%s %d %d", &basketawal[i][j].nama, &basketawal[i][j].atk, &basketawal[i][j].def);
            basketawal[i][j].overall = basketawal[i][j].atk + basketawal[i][j].def;
            basketakhir[i][j] = basketawal[i][j];  // semua nilai matriks bungkusan awal diisikan ke matriks bungkusan baru
        }
    }

    // Ketentuan pertukaran antara tim hingga menemukan kata "stop":
    char find1[99][99], find2[99][99], key[99];
    int totalcari = 0;
    do {
        scanf("%s", &key);
        if (strcmp(key, "stop") == 0) {  // syarat jika menemukan kata stop
            break;
        }
        scanf("%s", &find2[totalcari]);
        strcpy(find1[totalcari], key);
        totalcari++;
    } while (strcmp(key, "stop") != 0);

    // Proses pertukaran antara dua tim:
    tim temp;
    int titik1[2], titik2[2];
    for (int k = 0; k < totalcari; k++) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (strcmp(find1[k], basketakhir[i][j].nama) == 0) {  // membandingkan kata kunci masukan user dengan matriks bungkusan kemudian titik koordinat indeksnya dimasukan
                    titik1[0] = i;
                    titik1[1] = j;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (strcmp(find2[k], basketakhir[i][j].nama) == 0) {  // membandingkan kata kunci masukan user dengan matriks bungkusan kemudian titik koordinat indeksnya dimasukan
                    titik2[0] = i;
                    titik2[1] = j;
                }
            }
        }
        // Proses pertukaran akan terjadi apabila nilai rata-rata (atk+def) tim matriks bungkusan yang kiri lebih besar daripada yang kanan
        if ((basketakhir[titik1[0]][titik1[1]].overall) > (basketakhir[titik2[0]][titik2[1]].overall)) {
            temp = basketakhir[titik1[0]][titik1[1]];
            basketakhir[titik1[0]][titik1[1]] = basketakhir[titik2[0]][titik2[1]];
            basketakhir[titik2[0]][titik2[1]] = temp;
        }
    }

    // Ketentuan string terpanjang:
    int panjang[2][n];
    for (int j = 0; j < n; j++) {
        int maksawal = 0;
        int maksakhir = 0;
        for (int i = 0; i < m; i++) {
            // Kondisi matriks(kolom) terpanjang diisi ke variabel maks
            if (strlen(basketawal[i][j].nama) > maksawal) {
                maksawal = strlen(basketawal[i][j].nama);
            }
            if (strlen(basketakhir[i][j].nama) > maksakhir) {
                maksakhir = strlen(basketakhir[i][j].nama);
            }
        }
        // menyimpan variabel maks ke array dua dimensi dimana indeks 0 untuk maks matriks awal dan 1 untuk maks matriks akhir
        panjang[0][j] = maksawal;
        panjang[1][j] = maksakhir;
    }

    // Drawing awal dan setelah pengecekan overall:
    cetakDrawing(m, n, "Drawing Awal", basketawal, panjang, 0);
    cetakDrawing(m, n, "\nDrawing Akhir", basketakhir, panjang, 1);

    return 0;
}