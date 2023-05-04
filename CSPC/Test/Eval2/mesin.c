/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Evaluasi 2
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// procedure for starting the word machine
void start(char str[]) {
    // init
    idx = 0;
    wlen = 0;

    while (str[idx] == ' ') {
        idx++;
    }

    // if the input is a character other than 'space' and 'eop', the word is set to a global variable
    while ((str[idx] != ' ') && (eop(str) == 0)) {
        cw[wlen] = str[idx];
        idx++;
        wlen++;
    }

    // set the current word it's last index to 'null'
    cw[wlen] = '\0';
}

// function to check the end of the process (eop)
int eop(char str[]) {
    // checks if the current character is a word ending 'symbol'
    if (str[idx] == ';') {
        return 1;
    } else {
        return 0;
    }
}

// procedure for advancing the word
void inc(char str[]) {
    // init word length
    wlen = 0;

    while (str[idx] == ' ') {
        idx++;
    }

    // if the input is a character other than 'space' and 'eop', the word is set to a global variable
    while ((str[idx] != ' ') && (eop(str) == 0)) {
        cw[wlen] = str[idx];
        idx++;
        wlen++;
    }

    // set the current word it's last index to 'null'
    cw[wlen] = '\0';
}

// function to get the current word
char *getcw() {
    return cw;
}

/*=================================================================================================== INSERT ===================================================================================================*/

void insert_Data(char tape[], barang bekas[]) {
    /*First advance the word and then copy string to struct data,
    repeat it until the last input.*/
    inc(tape);
    for (int i = 0; i < total; i++) {               // checks if there's a duplicated data,
        if (strcmp(bekas[i].nama, getcw()) == 0) {  // if the input is already in the data,
            return;                                 // then exit the procedure
        }
    }
    strcpy(bekas[total].nama, getcw());
    inc(tape);
    strcpy(bekas[total].harga, getcw());
    inc(tape);
    strcpy(bekas[total].status, getcw());
    total++;
}

/*=================================================================================================== UPDATE ===================================================================================================*/

// procedure for updating data
void update_Data(char tape[], barang bekas[]) {
    // First of all, advance the word.
    inc(tape);
    // Foreach, "NAMA/HARGA/STATUS" and advance word again.
    if (strcmp(getcw(), "NAMA") == 0) {
        inc(tape);
        for (int i = 0; i < total; i++) {               // loop entire data,
            if (strcmp(bekas[i].nama, getcw()) == 0) {  // check if "nama barang" exist,
                inc(tape);                              // advancing word,
                strcpy(bekas[i].nama, getcw());         // copy string with new data.
            }
        }
    } else if (strcmp(getcw(), "HARGA") == 0) {
        inc(tape);
        for (int i = 0; i < total; i++) {
            if (strcmp(bekas[i].nama, getcw()) == 0) {
                inc(tape);
                strcpy(bekas[i].harga, getcw());
            }
        }
    } else if (strcmp(getcw(), "STATUS") == 0) {
        inc(tape);
        for (int i = 0; i < total; i++) {
            if (strcmp(bekas[i].nama, getcw()) == 0) {
                inc(tape);
                strcpy(bekas[i].status, getcw());
            }
        }
    }
}

/*=================================================================================================== OUTPUT ===================================================================================================*/

// function for making space
void print_Char(char s, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", s);
    }
}

// procedure for displaying data
void select_Data(char tape[], barang bekas[]) {
    int maxNAMA, maxHARGA, maxSTATUS;
    maxNAMA = 6;                                // max length from "BARANG"
    maxHARGA = 8;                               // max length from "HARGA" + "Rp."
    maxSTATUS = 6;                              // max length from "STATUS"
    for (int i = 1; i < total; i++) {           // loop entire data except the first data (starts i = 1)
        if (strlen(bekas[i].nama) > maxNAMA) {  // basically if there's a word more than the max length,
            maxNAMA = strlen(bekas[i].nama);    // the max length data changes to the new word.
        }
        if (strlen(bekas[i].harga) > maxHARGA) {
            maxHARGA = strlen(bekas[i].harga);
        }
        if (strlen(bekas[i].status) > maxSTATUS) {
            maxSTATUS = strlen(bekas[i].status);
        }
    }

    // displaying data using table
    print_Char('=', maxNAMA + maxHARGA + maxSTATUS + 11);  // total max length
    printf("\n");

    // row 1
    printf("|");
    print_Char(' ', 1);
    printf("BARANG");
    print_Char(' ', maxNAMA - 6 + 1);  // max length - ["BARANG"] 6 + 1 space
    printf("|");
    print_Char(' ', 1);
    printf("HARGA");
    print_Char(' ', maxHARGA - 4 + 1);  // max length - (["HARGA"] 5 - ["Rp."] 3) + 1 space
    printf("|");
    print_Char(' ', 1);
    printf("STATUS");
    print_Char(' ', maxSTATUS - 6 + 1);  // max length - ["STATUS"] 6 + 1 space
    printf("|\n");

    // make boundaries
    print_Char('=', maxNAMA + maxHARGA + maxSTATUS + 11);
    printf("\n");

    for (int i = 0; i < total; i++) {
        printf("|");
        print_Char(' ', 1);                                    // print 1 space
        printf("%s", bekas[i].nama);                           // print data
        print_Char(' ', maxNAMA - strlen(bekas[i].nama) + 1);  // max length - len string data + 1 space
        printf("|");
        print_Char(' ', 1);
        printf("Rp.%s", bekas[i].harga);
        print_Char(' ', maxHARGA - strlen(bekas[i].harga) - 2 + 1);
        printf("|");
        print_Char(' ', 1);
        printf("%s", bekas[i].status);
        print_Char(' ', maxSTATUS - strlen(bekas[i].status) + 1);
        printf("|\n");
    }

    // boundaries
    print_Char('=', maxNAMA + maxHARGA + maxSTATUS + 11);
    printf("\n");

    printf("%d data ditampilkan.\n", total);
}
