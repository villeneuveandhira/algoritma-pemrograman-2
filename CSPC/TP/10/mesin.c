/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 10
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "tp10.h"

// prosedur untuk memulai mesin kata
void start(char str[]) {
    // inisialisasi indeks dan panjang kata
    idx = 0;
    wlen = 0;

    // jika karakter dalam pita adalah spasi/titik koma, indeks terus maju
    while (str[idx] == ';') {
        idx++;
        if (str[idx] == ' ') {
            idx++;
        }
    }

    // jika masukan berupa karakter selain spasi/titik koma dan eop, kata diatur ke variabel global
    while ((str[idx] != ';') && (eop(str) == 0)) {
        cw[wlen] = str[idx];
        idx++;
        wlen++;
    }

    // mengatur agara kata saat ini indeks terkahirnya menjadi null.
    cw[wlen] = '\0';
}

// prosedur untuk mengosongkan kata yang dibaca dalam mesin kata
void reset() {
    // inisialisasi panjang kata dan kata saat ini agar NULL
    wlen = 0;
    cw[wlen] = '\0';
}

// fungsi untuk memeriksa akhir dari proses (end of process)
int eop(char str[]) {
    // memeriksa apakah karakter saat ini merupakan simbol akhir pita
    if (str[idx] == '.') {
        return 1;
    } else {
        return 0;
    }
}

// prosedur untuk memajukan kata
void inc(char str[]) {
    // inisialisasi ilang panjang kata.
    wlen = 0;

    // jika karakter dalam pita adalah spasi/titik koma, indeks terus maju
    while (str[idx] == ';') {
        idx++;
        if (str[idx] == ' ') {
            idx++;
        }
    }

    // jika masukan berupa karakter selain spasi/titik koma dan eop, kata diatur ke variabel global
    while ((str[idx] != ';') && (str[idx] != '.')) {
        cw[wlen] = str[idx];
        idx++;
        wlen++;
    }

    // mengatur agar kata saat ini indeks terkahirnya menjadi NULL
    cw[wlen] = '\0';
}

// fungsi untuk mendapatkan panjang kata saat ini
int getlen() {
    return wlen;
}

// fungsi untuk mendapatkan kata saat ini
char *getcw() {
    return cw;
}

// procedure untuk selection sorting
void selection_Sort(int n, char arr[101][101]) {
    int i, j, min;
    char temp[100];
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[min], arr[j]) > 0) {
                min = j;
            }
        }
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[min]);
        strcpy(arr[min], temp);
    }
}

// procedure for print output (kata_pendek)
void print_Pendek(int n, char arr[101][101]) {
    printf("KATA PENDEK\n");
    // Jika ada kelompok kata yang kosong, maka perlu diberi tahu bahwa kelompok kata TIDAK ADA.
    if (n == 0) {
        printf("TIDAK ADA.\n");
    } else {
        for (int i = 0; i < n; i++) {
            printf("- %s\n", arr[i]);
        }
    }
    printf("\n");
}

// procedure for print output (kata_menengah)
void print_Menengah(int n, char arr[101][101]) {
    printf("KATA MENENGAH\n");
    // Jika ada kelompok kata yang kosong, maka perlu diberi tahu bahwa kelompok kata TIDAK ADA.
    if (n == 0) {
        printf("TIDAK ADA.\n");
    } else {
        for (int i = 0; i < n; i++) {
            printf("- %s\n", arr[i]);
        }
    }
    printf("\n");
}

// procedure for print output (kata_panjang)
void print_Panjang(int n, char arr[101][101]) {
    printf("KATA PANJANG\n");
    for (int i = 0; i < n; i++) {
        printf("- %s\n", arr[i]);
    }
}