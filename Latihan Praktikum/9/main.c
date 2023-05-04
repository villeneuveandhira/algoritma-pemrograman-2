/*
Buatlah satu mesin karakter yang bisa menghitung jumlah suku kata “se” dalam
sebuah pita, dengan titik sebagai simbol akhir pita tersebut! Adapun keluarannya
adalah pita tanpa titik dan jumlah suku kata yang ditemukan.
*/

/*
Contoh masukan:
Techi sedang mengsedih.
Contoh keluaran:
Techi sedang mengsedih
Jumlah suku kata : 2

Contoh masukan 2:
Techi
Contoh keluaran 2:
Techi
Jumlah suku kata : 0
*/

#include "vil.h"

int main(int argc, char const *argv[]) {
    // input
    char nama[100];
    scanf("%99[^\n]s", nama);
    // start character machine
    start(nama);
    // variable to count the number of syllables
    int ans = 0;
    while (eop() == 0) {
        printf("%c", getcc());
        char temp = getcc();
        inc(nama);
        if (eop() == 0) {
            if (temp == 's' && getcc() == 'e') {  // if it contains the syllable "se"
                ans++;                            // +1, as long as it contains "se"
            }
        }
    }
    printf("\nJumlah suku kata : %d\n", ans);

    return 0;
}