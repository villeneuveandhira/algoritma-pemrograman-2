/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Ujian Tengah Semester
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// function untuk harga/(kalori+harga)
void hitung(int n, minyak arr[]) {
    for (int i = 0; i < n; i++) {
        arr[i].kebutuhan = (double)arr[i].harga / (arr[i].kalori + arr[i].lemak);
        arr[i].sisabagi = arr[i].harga % (arr[i].kalori + arr[i].lemak);
    }
}

// function menampilkan data array
void print_Array(int n, minyak arr[]) {
    hitung(n, arr);
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i].nama_merk);
        if (arr[i].sisabagi == 0) {
            printf("%d %d %d - %.0lf\n", arr[i].kalori, arr[i].lemak, arr[i].harga, arr[i].kebutuhan);
        } else {
            printf("%d %d %d - %.2lf\n", arr[i].kalori, arr[i].lemak, arr[i].harga, arr[i].kebutuhan);
        }
    }
}

// function menampilkan merged array
void print_Merged(int n, minyak arr[]) {
    hitung(n, arr);
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i].nama_merk);
        if (arr[i].sisabagi == 0) {
            printf("%d %d %d - %.0lf Supplier %d\n", arr[i].kalori, arr[i].lemak, arr[i].harga, arr[i].kebutuhan, arr[i].supplier);
        } else {
            printf("%d %d %d - %.2lf Supplier %d\n", arr[i].kalori, arr[i].lemak, arr[i].harga, arr[i].kebutuhan, arr[i].supplier);
        }
    }
}

// function sorting insertion
void insertion_Sort(int n, minyak arr[]) {
    int i, j;
    minyak key;
    hitung(n, arr);
    for (i = 0; i < n; i++) {
        // array ke-i untuk disisipkan
        key = arr[i];
        j = i - 1;
        while (j >= 0 && key.kebutuhan < arr[j].kebutuhan) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    print_Array(n, arr);
}

// function sorting selection
void selection_Sort(int n, minyak arr[]) {
    int i, j, min;
    minyak temp;
    hitung(n, arr);
    for (i = 0; i < n - 1; i++) {
        // inisialisasi indeks elemen minimal
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[min].kebutuhan > arr[j].kebutuhan) {
                min = j;
            }
        }
        // menukar posisi di indeks minimal dengan indeks ke-i
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    print_Array(n, arr);
}

// function untuk bubble sorting
void bubble_Sort(int n, minyak arr[]) {
    int i, s;
    minyak temp;
    hitung(n, arr);
    do {
        // penanda tukar data
        s = 0;
        for (i = 0; i < (n - 1); i++) {
            if (arr[i].kebutuhan > arr[i + 1].kebutuhan) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                // ada penukaran
                s = 1;
            }
        }
    } while (s == 1);

    print_Array(n, arr);
}

// function untuk quick sorting
void quick_Sort(int n, minyak arr[], int l, int r) {
    int i, j, pivot;
    minyak temp;
    hitung(n, arr);
    if (l < r) {
        pivot = l;
        i = l;
        j = r;
        while (i < j) {
            while ((arr[i].kebutuhan <= arr[pivot].kebutuhan) && (i < r)) {
                i = i + 1;
            }
            while (arr[j].kebutuhan > arr[pivot].kebutuhan) {
                j = j - 1;
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
        quick_Sort(n, arr, l, j - 1);
        quick_Sort(n, arr, j + 1, r);
    }
}

// function untuk menggabungkan dua array ke dalam satu array baru
void merge_Terurut(int n, minyak arr1[], int m, minyak arr2[], minyak arr3[]) {
    int i = 0, j = 0;
    int hitung = 0;
    int sisa;
    while ((i < n) && (j < m)) {
        if (arr1[i].kebutuhan < arr2[j].kebutuhan) {
            arr3[hitung] = arr1[i];
            i++;
            hitung++;
        } else if (arr2[j].kebutuhan < arr1[i].kebutuhan) {
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