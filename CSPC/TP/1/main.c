/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 1
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main() {
    // Ukuran matriks:
    int m, n;  // jumlah baris & jumlah kolom
    scanf("%d %d", &m, &n);

    // Matriks:
    char matriks_awal[99][99];   // matriks awal
    char matriks_akhir[99][99];  // matriks akhir
    char matriks_temp[99][99];   // matriks sementara

    // Pengisian matriks:
    int awal_m = m, awal_n = n;  // baris & kolom awal
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %c", &matriks_awal[i][j]);
        }
    }

    // Ketentuan transformasi:
    int a;  // jumlah transformasi
    scanf("%d", &a);
    char b[a];  // kode transformasi
    for (int i = 0; i < a; i++) {
        scanf(" %c", &b[i]);
    }

    salin_matriks(m, n, matriks_awal, matriks_akhir);  // menyalin matriks awal

    // Transformasi matriks sesuai ketentuan:
    for (int i = 0; i < a; i++) {
        switch (b[i]) {
            case 'A':  // untuk refleksi ke atas
                salin_matriks(m, n, matriks_akhir, matriks_temp);
                mirror_ud(n, m, matriks_temp, matriks_akhir);
                break;
            case 'B':  // untuk rotasi ke kanan
                transpose(m, n, matriks_akhir, matriks_temp);
                mirror_lr(m, n, matriks_temp, matriks_akhir);
                swap(&m, &n);
                break;
            case 'C':  // untuk rotasi ke kiri
                transpose(m, n, matriks_akhir, matriks_temp);
                mirror_ud(m, n, matriks_temp, matriks_akhir);
                swap(&m, &n);
                break;
            case 'D':  // untuk transpose
                salin_matriks(m, n, matriks_akhir, matriks_temp);
                transpose(m, n, matriks_temp, matriks_akhir);
                swap(&m, &n);
                break;
            default:
                break;
        }
    }

    // Tampilan hasil transformasi matriks:
    print_matriks(m, n, matriks_akhir);

    // Keterangan matriks:
    // jika semua elemen pada matrix memiliki posisi yang TIDAK sama tampilkan "Keren! Ayo kita main lagi!"
    if ((awal_m != m) || (awal_n != n)) {
        printf("Keren! Ayo kita main lagi!\n");
    } else {
        int sama = 1;
        for (int i = 0; i < awal_m; i++) {
            for (int j = 0; j < awal_n; j++) {
                // memeriksa satu per satu kesamaan matriks
                if (matriks_awal[i][j] != matriks_akhir[i][j]) {
                    sama = 0;
                    break;
                }
            }
            if (sama == 0) {
                printf("Keren! Ayo kita main lagi!\n");
                break;
            }
        }

        // jika semua elemen pada matrix memiliki posisi yang SAMA maka tampilkan "Main lagi besok!"
        if (sama == 1) {
            printf("Main lagi besok!\n");
        }
    }
    return 0;
}