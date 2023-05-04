/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Evaluasi 1
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// function untuk menampilkan data
void print_Output(int n, mahasiswa arr[]) {
    printf("====================\n");
    for (int i = 0; i < n; i++) {
        printf("%s", arr[i].NIM);
        printf(" %s ", arr[i].nama);
        printf("%d\n", arr[i].nilai);
    }
}

// function untuk bubble sorting NIM - ASCENDING
void bubblesort_NIM(int n, mahasiswa arr[]) {
    int i, s;
    mahasiswa temp;
    do {
        // penanda tukar data
        s = 0;
        for (i = 0; i < (n - 1); i++) {
            if (strcmp(arr[i].NIM, arr[i + 1].NIM) > 0) {
                // tukar data
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                // tanda ada penukaran
                s = 1;
            }
        }
    } while (s == 1);
}

// function untuk bubble sorting nilai - DESCENDING
void bubblesort_Nilai(int n, mahasiswa arr[]) {
    int i, s;
    mahasiswa temp;
    do {
        // penanda tukar data
        s = 0;
        for (i = 0; i < (n - 1); i++) {
            if (arr[i].nilai < arr[i + 1].nilai) {
                // tukar data
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                // tanda ada penukaran
                s = 1;
            }
        }
    } while (s == 1);
}

// function untuk menggabungkan dua array ke dalam satu array baru
void merge_Terurut(int n, mahasiswa arr1[], int m, mahasiswa arr2[], mahasiswa arr3[]) {
    int i = 0, j = 0;
    int hitung = 0;
    int sisa;
    while ((i < n) && (j < m)) {
        if (strcmp(arr1[i].NIM, arr2[j].NIM) < 0) {
            arr3[hitung] = arr1[i];
            i++;
            hitung++;
        } else if (strcmp(arr2[j].NIM, arr1[i].NIM) < 0) {
            arr3[hitung] = arr2[j];
            j++;
            hitung++;
        } else {
            arr3[hitung] = arr1[i];
            i++;
            hitung++;
            arr3[hitung] = arr2[j];
            j++;
            hitung++;
        }
    }
    // menggabungkan sisa data array
    if (i < n) {
        for (sisa = i; sisa < n; sisa++, hitung++) {
            arr3[hitung] = arr1[sisa];
        }
    }
    if (j < m) {
        for (sisa = j; sisa < m; sisa++, hitung++) {
            arr3[hitung] = arr2[sisa];
        }
    }
}