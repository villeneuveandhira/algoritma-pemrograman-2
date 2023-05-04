/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Evaluasi 2
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main() {
    // variable declaration
    char tape[99];     // for the input string
    barang bekas[99];  // struct data
    int stop = 0;      // mark for looping until input "SELESAI"

    while (stop == 0) {              // if stop's value still 0 then forever loop,
        scanf(" %98[^\n]s", &tape);  // input string
        start(tape);                 // start machine word

        int last = strlen(tape);                       // new variable for counting max length entire input string
        if (tape[last - 1] != ';') {                   // if there's no 'semicolom' needs new input
            stop = 0;                                  // loop again
        } else if (strcmp(getcw(), "INSERT") == 0) {   // if the first word, "INSERT"
            insert_Data(tape, bekas);                  // inserting data
            stop = 0;                                  // loop again
        } else if (strcmp(getcw(), "UPDATE") == 0) {   // if the first word, "UPDATE"
            update_Data(tape, bekas);                  // updating data
            stop = 0;                                  // loop again
        } else if (strcmp(getcw(), "SELESAI") == 0) {  // if the first word, "SELESAI"
            select_Data(tape, bekas);                  // displaying data
            stop = 1;                                  // stop loop
        } else {                                       // not same as format inputs
            stop = 0;                                  // loop again
        }
    }

    return 0;
}