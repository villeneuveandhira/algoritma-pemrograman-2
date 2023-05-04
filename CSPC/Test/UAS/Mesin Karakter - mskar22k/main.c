/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Ujian Akhir Semester nomor 1 - Mesin Karakter
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

/*
Contoh masukan:
3
a
aku adalah anak gembala$

Contoh keluaran:
5
*/

#include "uas.h"

int main() {
    int n;          // number of characters per group
    int x = 0;      // counter for string
    int y = 0;      // counter
    char check;     // char that need to be checked on each character group
    char temp[99];  // temporary string
    char str[501];  // string with a max of 500 characters

    // input
    scanf("%d %c %500[^\n]s", &n, &check, &str);

    start(str);
    while (eop() == 0) {
        temp[x] = getcc();                 // insert characters into temporary string
        x++;                               // increment for group's counter
        inc(str);                          // advancing each character (exclude the space)
        if (x == n) {                      // if counter reaches max
            for (int i = 0; i < n; i++) {  // loop for characters per group
                if (temp[i] == check) {    // if group contains the given char that need to be checked
                    y++;                   // iteration
                    i = n;                 // special case for exit loop
                }
            }
            x = 0;  // reset group's counter
        }
    }

    // output
    printf("%d\n", y);

    return 0;
}