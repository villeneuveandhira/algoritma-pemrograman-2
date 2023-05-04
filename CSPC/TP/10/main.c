/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 10
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

/*
contoh masukan:
3 5
data; ini; penting; dan; harus; dipisah.

contoh keluaran:
KATA PENDEK
- dan
- ini

KATA MENENGAH
- data
- harus

KATA PANJANG
- dipisah
- penting

contoh masukan 2:
6 4
dbms; koreksian; algoritma dan pemrograman.

contoh keluaran 2:
KATA PENDEK
- dbms

KATA MENENGAH
TIDAK ADA.

KATA PANJANG
- algoritma dan pemrograman
- koreksian
*/

#include "tp10.h"

int main() {
    // deklarasi variabel
    int n1, n2,
        satu, dua;
    // tiga kelompok yang berbeda: pendek, menengah, dan panjang.
    char pendek[101][101];
    char menengah[101][101];
    char panjang[101][101];
    char str[101];

    // input(masukan)
    /* Dua bilangan untuk panjang maksimal setiap kelompok kata.
    Satu string teks data yang diakhiri titik, dengan panjang maksimal 100 huruf.*/
    scanf("%d %d %100[^\n]s", &n1, &n2, &str);

    /* Panjang maksimal untuk kelompok kata pendek dan panjang dimasukkan sebelum teks, dengan urutan yang tak tentu.
    Bisa saja masukannya adalah pendek-menengah atau menengah-pendek.
    Meski begitu, dapat dipastikan bahwa tidak ada kelompok kata yang panjang maksimalnya sama.*/
    if (n1 < n2) {
        satu = n1;
        dua = n2;
    } else if (n2 < n1) {
        satu = n2;
        dua = n1;
    }

    // inisialisasi penghitung kata per kategori
    int a = 0, b = 0, c = 0;
    start(str);
    getcw();
    // pengelompokan kata berdasarkan kategori
    if (getlen() <= satu) {
        strcpy(pendek[a], getcw());
        a++;
    } else if (getlen() <= dua) {
        strcpy(menengah[b], getcw());
        b++;
    } else {
        strcpy(panjang[c], getcw());
        c++;
    }
    while (eop(str) == 0) {
        inc(str);
        getcw();
        if (getlen() <= satu) {
            strcpy(pendek[a], getcw());
            a++;
        } else if (getlen() <= dua) {
            strcpy(menengah[b], getcw());
            b++;
        } else {
            strcpy(panjang[c], getcw());
            c++;
        }
    }

    // Setiap kata dimasukkan ke dalam kelompok kata dan diurutkan berdasarkan alfabet (A-Z).
    selection_Sort(a, pendek);
    selection_Sort(b, menengah);
    selection_Sort(c, panjang);

    // output(keluaran)
    print_Pendek(a, pendek);
    print_Menengah(b, menengah);
    print_Panjang(c, panjang);

    return 0;
}