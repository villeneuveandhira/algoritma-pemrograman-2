/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 9
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "tp9.h"
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

// procedure for decreasing a character
void dec(char str[]) {
    idx--;
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

// function to check capital letters
int isUpper(char c) {
    if (c >= 'A' && c <= 'Z') {
        return 1;  // capital letters (true)
    }
    return 0;  // NOT capital letters (false)
}