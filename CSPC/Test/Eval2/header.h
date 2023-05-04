/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Evaluasi 2
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

// data struct
typedef struct {
    char nama[99];
    char harga[99];
    char status[99];
} barang;

// global variable declaration
int idx,      // index of the last character of the word
    wlen;     // word length
char cw[52];  // current word
int total;    // total data

// procedure or function declaration
/*word machine*/
void start(char str[]);
int eop(char str[]);
void inc(char str[]);
char *getcw();

/*insert/update/print*/
void insert_Data(char tape[], barang bekas[]);
void update_Data(char tape[], barang bekas[]);
void print_Char(char s, int n);
void select_Data(char tape[], barang bekas[]);