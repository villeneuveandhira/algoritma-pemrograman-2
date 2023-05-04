/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 5
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// function untuk membuat jarak
void printS(char s, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", s);
    }
}

// function untuk menampilkan hasil sorting
void printArray(int n, film arr[]) {
    int maxJudul;
    maxJudul = strlen(arr[0].judul);
    for (int i = 1; i < n; i++) {
        if (strlen(arr[i].judul) > maxJudul) {
            maxJudul = strlen(arr[i].judul);
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s", arr[i].judul);
        printS(' ', maxJudul - strlen(arr[i].judul) + 2);
        printf("%dj", arr[i].jam);
        printf(" ");
        printf("%dm\n", arr[i].menit);
    }
}

// function untuk bubble sorting
void bubbleSort(int n, film arr[], int x) {
    int i, s;
    film temp;
    for (i = 0; i < n; i++) {
        arr[i].detik = (arr[i].jam * 3600) + (arr[i].menit * 60);
    }
    do {
        // penanda tukar data
        s = 0;

        // untuk ascending
        if (x == 0) {
            for (i = 0; i < (n - 1); i++) {
                if (arr[i].detik > arr[i + 1].detik) {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;

                    // ada penukaran
                    s = 1;
                }
            }
        }
        // untuk descending
        else if (x == 1) {
            for (i = 0; i < (n - 1); i++) {
                if (arr[i].detik < arr[i + 1].detik) {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;

                    // ada penukaran
                    s = 1;
                }
            }
        }
    } while (s == 1);

    printArray(n, arr);
}

// function untuk quick sorting
void quickSort(int n, film arr[], int l, int r, int x) {
    film temp;
    int i, j, pivot;
    for (i = 0; i < n; i++) {
        arr[i].detik = (arr[i].jam * 3600) + (arr[i].menit * 60);
    }
    if (l < r) {
        pivot = l;
        i = l;
        j = r;
        while (i < j) {
            // untuk ascending
            if (x == 0) {
                while ((arr[i].detik <= arr[pivot].detik) && (i < r)) {
                    i = i + 1;
                }
                while (arr[j].detik > arr[pivot].detik) {
                    j = j - 1;
                }
            }
            // untuk descending
            if (x == 1) {
                while ((arr[i].detik >= arr[pivot].detik)) {
                    i = i + 1;
                }
                while (arr[j].detik < arr[pivot].detik) {
                    j = j - 1;
                }
            }
            if (i <= j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quickSort(n, arr, l, j - 1, x);
        quickSort(n, arr, j + 1, r, x);
    }
}