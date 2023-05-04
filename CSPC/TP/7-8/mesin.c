/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 8
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// procedure for binary-search
void bin_Search(code data[], int n, char search[]) {
    int i = 0, k = 0, found = 0;
    while ((i <= n) && (found == 0)) {
        k = (int)((i + n) / 2);                   // divided by 2
        if (strcmp(data[k].kode, search) == 0) {  // if match, found=1
            found = 1;
        } else {
            if (strcmp(data[k].kode, search) > 0) {
                n = k - 1;
            } else {
                i = k + 1;
            }
        }
    }
    if (found == 1) {
        printf("Matched data : %s\n", data[k].nama);
    } else {
        printf("No data matched!\n");
    }
}

// procedure for making space
void print_S(char s, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", s);
    }
}
// procedure for print all data
void print_Data(int n, film data[]) {
    int maxNomor, maxJudul, maxSutradara, maxGenre, maxBioskop;
    maxNomor = 2;
    maxJudul = strlen(data[0].judul);
    maxSutradara = strlen(data[0].genre);
    maxGenre = strlen(data[0].genre);
    maxBioskop = strlen(data[0].genre);
    for (int i = 1; i < n; i++) {
        if (strlen(data[i].judul) > maxJudul) {
            maxJudul = strlen(data[i].judul);
        }
        if (strlen(data[i].sutradara) > maxSutradara) {
            maxSutradara = strlen(data[i].sutradara);
        }
        if (strlen(data[i].genre) > maxGenre) {
            maxGenre = strlen(data[i].genre);
        }
        if (strlen(data[i].bioskop) > maxBioskop) {
            maxBioskop = strlen(data[i].bioskop);
        }
    }

    print_S('=', maxJudul + maxSutradara + maxGenre + maxBioskop + 23);
    printf("\n");

    printf("| NO");
    print_S(' ', maxNomor - 2 + 2);
    printf("| LIST-FILM-FINAL");
    print_S(' ', maxJudul - 15 + 2);
    printf("| SUTRADARA");
    print_S(' ', maxSutradara - 9 + 2);
    printf("| GENRE");
    print_S(' ', maxGenre - 5 + 2);
    printf("| BIOSKOP");
    print_S(' ', maxBioskop - 7 + 2);
    printf("|\n");

    print_S('-', maxJudul + maxSutradara + maxGenre + maxBioskop + 23);
    printf("\n");

    int nomor = 1;
    for (int i = 0; i < n; i++) {
        printf("| %d", nomor++);
        print_S(' ', nomor > 10 ? maxNomor - 2 + 2 : maxNomor - 1 + 2);
        printf("| %s", data[i].judul);
        print_S(' ', maxJudul - strlen(data[i].judul) + 2);
        printf("| %s", data[i].sutradara);
        print_S(' ', maxSutradara - strlen(data[i].sutradara) + 2);
        printf("| %s", data[i].genre);
        print_S(' ', maxGenre - strlen(data[i].genre) + 2);
        printf("| %s", data[i].bioskop);
        print_S(' ', maxBioskop - strlen(data[i].bioskop) + 2);
        printf("|\n");
    }
    print_S('=', maxJudul + maxSutradara + maxGenre + maxBioskop + 23);
    printf("\n");
}