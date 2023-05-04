/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Ujian Akhir Semester nomor 2 - Mesin Kata
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "uas.h"

// procedure to start word machine
void start(char str[]) {
    // init @word
    idx = 0;
    wlen = 0;

    // if there's space, index keep moving
    while (str[idx] == ' ') {
        idx++;
    }

    // if input are character except space and EOP
    while ((str[idx] != ' ') && (eop(str) == 0)) {
        cw[wlen] = str[idx];
        idx++;
        wlen++;
    }

    // set current word at the last index to NULL
    cw[wlen] = '\0';
}

// function to check the last of process
int eop(char str[]) {
    if (str[idx] == '$') {
        return 1;
    } else {
        return 0;
    }
}

// procedure to advancing a word
void inc(char str[]) {
    // init @word
    wlen = 0;

    // if there's space, index keep moving
    while (str[idx] == ' ') {
        idx++;
    }

    // if input are character except space and EOP
    while ((str[idx] != ' ') && (str[idx] != '$')) {
        cw[wlen] = str[idx];
        idx++;
        wlen++;
    }

    // set current word at the last index to NULL
    cw[wlen] = '\0';
}

// function to get length on the current word
int getlen() {
    return wlen;
}

// function to get a current word
char *getcw() {
    return cw;
}

// procedure to check if the string has the substring
void print_Substring(char check[99]) {
    // init counter
    int x = 0;
    int j = 0;
    while (check[j] != '\0') {
        j++;
    }
    for (int i = 0; i < getlen(); i++) {  // loop for the whole string
        if (getcw()[i] != check[x]) {     // if current word isn't same as substring,
            x = 0;                        // reset counter to zero
        } else {                          // if it's same,
            x++;                          // iteration counter
            if (x >= j) {                 // if the counter exceed than the substring's length,
                printf("%s\n", getcw());  // print the current word
                i = getlen();             // stop looping after print
            }
        }
    }
}