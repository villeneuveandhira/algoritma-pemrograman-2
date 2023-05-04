/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 4
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main() {
    // masukkan n jumlah data
    int n;
    scanf("%d", &n);
    film bioskop[n];

    // masukkan judul, genre, rating film sejumlah n
    for (int i = 0; i < n; i++) {
        scanf("%s", &bioskop[i].judul);
        scanf("%s", &bioskop[i].genre);
        scanf("%f", &bioskop[i].rating);
    }

    // judul/rating
    char patokan[99];
    scanf("%s", &patokan);

    // metode sorting
    char metode[99];
    scanf("%s", &metode);

    // asc/desc
    char sc[99];
    scanf("%s", &sc);

    // output
    // jika patokan "judul"
    if (strcmp(patokan, "judul") == 0) {
        // jika metode sorting "insertion"
        if (strcmp(metode, "insertion") == 0) {
            // jika ascending
            if (strcmp(sc, "asc") == 0) {
                insertion(n, bioskop, 1, 1);
            }
            // jika descending
            else if (strcmp(sc, "desc") == 0) {
                insertion(n, bioskop, 1, 2);
            }
        }
        // jika metode sorting "selection"
        else if (strcmp(metode, "selection") == 0) {
            // jika ascending
            if (strcmp(sc, "asc") == 0) {
                printf("judul asc\n");
                selection(n, bioskop, 1, 1);
            }
            // jika descending
            else if (strcmp(sc, "desc") == 0) {
                printf("judul desc\n");
                selection(n, bioskop, 1, 2);
            }
        }
    }
    // jika patokan "rating"
    else if (strcmp(patokan, "rating") == 0) {
        // jika metode sorting "insertion"
        if (strcmp(metode, "insertion") == 0) {
            // jika ascending
            if (strcmp(sc, "asc") == 0) {
                insertion(n, bioskop, 2, 1);
            }
            // jika descending
            else if (strcmp(sc, "desc") == 0) {
                insertion(n, bioskop, 2, 2);
            }
        }
        // jika metode sorting "selection"
        else if (strcmp(metode, "selection") == 0) {
            // jika ascending
            if (strcmp(sc, "asc") == 0) {
                selection(n, bioskop, 2, 1);
            }
            // jika descending
            else if (strcmp(sc, "desc") == 0) {
                selection(n, bioskop, 2, 2);
            }
        }
    }

    return 0;
}