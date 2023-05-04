/*
Buatlah satu mesin karakter yang bisa menghitung jumlah suku kata “se” dalam
sebuah pita, dengan titik sebagai simbol akhir pita tersebut! Adapun keluarannya
adalah pita tanpa titik dan jumlah suku kata yang ditemukan.
*/

#include "vil.h"

// procedure for start characters machine
void start(char str[]) {
    idx = 0;        // inisialisasi index kalimat dengan 0 (awal kalimat)
    cc = str[idx];  // karakter pertama
}

// function for check the last of process
int eop() {
    if (cc == '.')
        return 1;
    return 0;
}

// procedure for advancing a character
void inc(char str[]) {
    idx++;
    cc = str[idx];
}

// procedure for advancing a character beyond the space
void adv(char str[]) {
    idx++;
    cc = str[idx];
    while (cc == ' ' && eop() == 0) {
        idx++;
        cc = str[idx];
    }
}

// function for get index on the current
int getidx() {
    return idx;
}

// function for get a character on the current
char getcc() {
    return cc;
}