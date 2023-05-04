/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Ujian Akhir Semester nomor 1 - Mesin Karakter
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "uas.h"

// procedure to start characters machine
void start(char str[]) {
    idx = 0;        // inisialisasi index kalimat dengan 0 (awal kalimat)
    cc = str[idx];  // karakter pertama
}

// function to check the last of process
int eop() {
    if (cc == '$')
        return 1;
    return 0;
}

// procedure to advancing a character beyond the space
void inc(char str[]) {
    idx++;
    cc = str[idx];
    while (cc == ' ' && eop() == 0) {
        idx++;
        cc = str[idx];
    }
}

// function to get index on the current
int getidx() {
    return idx;
}

// function to get a character on the current
char getcc() {
    return cc;
}