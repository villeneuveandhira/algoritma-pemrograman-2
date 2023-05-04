/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 4
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// function mencari string terpanjang
void length(int n, film arr[], int* maxJudul, int* maxGenre) {
    int i;
    *maxJudul = strlen(arr[0].judul);
    *maxGenre = strlen(arr[0].genre);
    for (i = 1; i < n; i++) {
        if (strlen(arr[i].judul) > *maxJudul) {
            *maxJudul = strlen(arr[i].judul);
        }
        if (strlen(arr[i].genre) > *maxGenre) {
            *maxGenre = strlen(arr[i].genre);
        }
    }
}

// function menampilkan tipe data char sesuai dengan masukan
void printS(char s, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", s);
    }
}

// function menampilkan keluaran
void printArr(int n, film arr[]) {
    int maxJudul, maxGenre;
    maxJudul = strlen(arr[0].judul);
    maxGenre = strlen(arr[0].genre);
    for (int i = 1; i < n; i++) {
        if (strlen(arr[i].judul) > maxJudul) {
            maxJudul = strlen(arr[i].judul);
        }
        if (strlen(arr[i].genre) > maxGenre) {
            maxGenre = strlen(arr[i].genre);
        }
    }

    printf("Daftar Film Terurut :\n");

    printS('=', maxJudul + maxGenre + 7);
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%s", arr[i].judul);
        printS(' ', maxJudul - strlen(arr[i].judul) + 2);
        printf("%s", arr[i].genre);
        printS(' ', maxGenre - strlen(arr[i].genre) + 2);
        printf("%.1f\n", arr[i].rating);
    }
    printS('=', maxJudul + maxGenre + 7);
    printf("\n");
}

// function sorting insertion
void insertion(int n, film arr[], int patokan, int sc) {
    int i, j;
    film key;
    for (i = 0; i < n; i++) {
        // array ke-i untuk disisipkan
        key = arr[i];
        j = i - 1;

        // jika patokan sorting "judul"
        if (patokan == 1) {
            // jika ascending
            if (sc == 1) {
                while (j >= 0 && strcmp(key.judul, arr[j].judul) < 0) {
                    arr[j + 1] = arr[j];
                    j--;
                }
            }
            // jika descending
            else if (sc == 2) {
                while (j >= 0 && strcmp(key.judul, arr[j].judul) > 0) {
                    arr[j + 1] = arr[j];
                    j--;
                }
            }
        }
        // jika patokan sorting "rating"
        else if (patokan == 2) {
            // jika ascending
            if (sc == 1) {
                while (j >= 0 && key.rating < arr[j].rating) {
                    arr[j + 1] = arr[j];
                    j--;
                }
            }
            // jika descending
            else if (sc == 2) {
                while (j >= 0 && key.rating > arr[j].rating) {
                    arr[j + 1] = arr[j];
                    j--;
                }
            }
        }
        arr[j + 1] = key;
    }

    // menampilkan keluaran hasil sorting
    printArr(n, arr);
}

// function sorting selection
void selection(int n, film arr[], int patokan, int sc) {
    int i, j, min;
    film temp;
    for (i = 0; i < n - 1; i++) {
        // inisialisasi indeks elemen minimal
        min = i;

        // jika patokan sorting "judul"
        if (patokan == 1) {
            for (j = i + 1; j < n; j++) {
                // jika ascending
                if (sc == 1 && strcmp(arr[min].judul, arr[j].judul) > 0) {
                    min = j;
                }
                // jika descending
                else if (sc == 2 && strcmp(arr[min].judul, arr[j].judul) < 0) {
                    min = j;
                }
            }
        }
        // jika patokan sorting "rating"
        else if (patokan == 2) {
            for (j = i + 1; j < n; j++) {
                // jika ascending
                if (sc == 1 && arr[min].rating > arr[j].rating) {
                    min = j;
                }
                // jika descending
                else if (sc == 2 && arr[min].rating < arr[j].rating) {
                    min = j;
                }
            }
        }
        // menukar posisi di indeks minimal dengan indeks ke-i
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    // menampilkan keluaran hasil sorting
    printArr(n, arr);
}