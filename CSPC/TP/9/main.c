/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 9
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

/*
Contoh Masukan:
DataIniPentingDanHarusDipisah.

Contoh Keluaran:
Data Ini Penting Dan Harus Dipisah

Contoh Masukan 2:
DBMSKoreksianAlpro.

Contoh Keluaran 2:
DBMS Koreksian Alpro
*/

#include "tp9.h"

int main(int argc, char const *argv[]) {
    // input
    char str[101];
    scanf("%100[^\n]s", &str);

    // start character machine
    start(str);
    while (eop() == 0) {  // loop for entire inputs
        // first store the letter in a temporary variable (this is for BEFORE the letter)
        char temp = getcc();
        // and then print it
        printf("%c", getcc());
        // once printed use the function to advance to the next letter
        inc(str);

        // use function to advancing the letter
        inc(str);
        // then store the letter in a second temporary variable (this is for AFTER the letter)
        char temp2 = getcc();
        dec(str);  // this function to return the index to the original letter

        /*so in conclusion, we got a total of 3 letters,
        i.e. the letter at the CURRENT index and both BEFORE and AFTER the letter.
        */

        // this is for checking the three letters current, before, and after
        if (eop() == 0) {
            /*There is one additional condition:
            If there are two or more capital letters side by side, then the letters are considered as one word until he finds a capital letter in the nth position with a lowercase letter in the (n + 1) position.
            */

            // the if condition is divided into two parts:
            /*first, to control the additional conditions,
            print space IF
            - the letter BEFORE is a capital letter,
            - the CURRENT letter is a capital letter,
            - the AFTER letter is a lowercase letter.
            for example 'aQUa' -> 'a Q Ua'
            */
            /*second, to separate words and the words starting with a capital letter,
            print space IF
            - the letter BEFORE is a lowercase letter,
            - the CURRENT letter is a capital letter.
            for example 'aQua' -> 'a Qua'
            */
            if (((isUpper(temp) == 1) && (isUpper(getcc()) == 1) && ((isUpper(temp2) == 0) && (temp2 != '.'))) || ((isUpper(temp) == 0) && (isUpper(getcc()) == 1))) {
                printf(" ");
            }
        }
    }
    // this is to add a new line
    printf("\n");

    return 0;
}