#include "header.h"

// prosedur untuk memulai mesin kata
void start(char str[]) {
    // inisialisasi indeks dan panjang kata
    idx = 0;
    wlen = 0;

    // jika karakter dalam pita adalah spasi, indeks terus maju
    while (str[idx] == ' ') {
        idx++;
    }

    // jika masukan berupa karakter selain spasi dan eop, kata diatur ke variabel global
    while ((str[idx] != ' ') && (eop(str) == 0)) {
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

    // jika karakter dalam pita adalah spasi, indeks terus maju
    while (str[idx] == ' ') {
        idx++;
    }

    // jika masukan berupa karakter selain spasi dan eop, kata diatur ke variabel global
    while ((str[idx] != ' ') && (str[idx] != '.')) {
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

// prosedur untuk memodifikasi data (tanpa error handling)
void modifydata(char str[], student *data) {
    // memulai mesin kata
    start(str);

    if (strcmp(getcw(), "INSERT") == 0) {
        inc(str);
        if (strcmp(getcw(), "mahasiswa") == 0) {
            inc(str);
            strcpy(data->nim, getcw());
            inc(str);
            strcpy(data->nama, getcw());
            inc(str);
            strcpy(data->nilai, getcw());
        } else {
            // Masukkan error handling di sini..
        }
    } else if (strcmp(getcw(), "UPDATE") == 0) {
        // masukkan kode modifikasi data di sini
    } else if (strcmp(getcw(), "DELETE") == 0) {
        // Masukkan kode penghapusan data di sini
    }
}