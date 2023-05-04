/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Ujian Akhir Semester nomor 2 - Mesin Kata
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

/*
Contoh masukan:
ala
aku adalah anak gembala selalu riang serta gembira karena aku rajin bekerja tak pernah malas ataupun lelah$

Contoh keluaran:
adalah
gembala
malas
*/

#include "uas.h"

int main() {
    char check[99];  // sub-string that need to be checked on each word
    char str[501];   // string with a max of 500 characters

    // input
    scanf("%s %500[^\n]s", &check, &str);

    start(str);
    getcw();                     //  get current word
    print_Substring(check);      // call procedure if there's a substring
    while (eop(str) == 0) {      // loop the whole string
        inc(str);                // advancing each word
        getcw();                 // get current word
        print_Substring(check);  // call procedure if there's a substring
    }

    return 0;
}