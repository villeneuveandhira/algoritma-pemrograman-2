/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 6
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// function untuk metode sorting insertion
void insertion_Sort(int n, wishlist arr[], int x) {
    int i, j;
    wishlist k;
    for (i = 0; i < n; i++) {
        k = arr[i];
        j = i - 1;
        // jika patokan "harga"(ascending)
        if (x == 0) {
            while (j >= 0 && k.harga < arr[j].harga) {
                arr[j + 1] = arr[j];
                j--;
            }
        }
        // jika patokan "rating"(descending)
        else if (x == 1) {
            while (j >= 0 && k.rating > arr[j].rating) {
                arr[j + 1] = arr[j];
                j--;
            }
        }
        arr[j + 1] = k;
    }
}

// function untuk metode sorting selection
void selection_Sort(int n, wishlist arr[], int x) {
    int i, j, min;
    wishlist temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            // jika patokan "harga"(ascending)
            if (x == 0) {
                if (arr[min].harga > arr[j].harga) {
                    min = j;
                }
            }

            // jika patokan "rating"(descending)
            else if (x == 1) {
                if (arr[min].rating < arr[j].rating) {
                    min = j;
                }
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

// function untuk metode sorting bubble
void bubble_Sort(int n, wishlist arr[], int x) {
    int i, s;
    wishlist temp;
    do {
        s = 0;
        // jika patokan "harga"(ascending)
        for (i = 0; i < (n - 1); i++) {
            if (x == 0) {
                if (arr[i].harga > arr[i + 1].harga) {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    s = 1;
                }
            }
            // jika patokan "rating"(descending)
            else if (x == 1) {
                if (arr[i].rating < arr[i + 1].rating) {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    s = 1;
                }
            }
        }
    } while (s == 1);
}

// function untuk metode sorting quick
void quick_Sort(int n, wishlist arr[], int l, int r, int x) {
    int i, j, pivot;
    wishlist temp;
    if (l < r) {
        pivot = l;
        i = l;
        j = r;
        while (i < j) {
            // jika patokan "harga"(ascending)
            if (x == 0) {
                while ((arr[i].harga <= arr[pivot].harga) && (i < r)) {
                    i = i + 1;
                }
                while (arr[j].harga > arr[pivot].harga) {
                    j = j - 1;
                }
            }
            // jika patokan "rating"(descending)
            else if (x == 1) {
                while ((arr[i].rating >= arr[pivot].rating)) {
                    i = i + 1;
                }
                while (arr[j].rating < arr[pivot].rating) {
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
        quick_Sort(n, arr, l, j - 1, x);
        quick_Sort(n, arr, j + 1, r, x);
    }
}

// function untuk menggabungkan dua array ke dalam satu array baru
void merge_Terurut(int n, wishlist arr1[], int m, wishlist arr2[], wishlist arr3[], int x) {
    int i = 0, j = 0;
    int hitung = 0;
    int sisa;
    // jika patokan "harga"(ascending)
    while ((i < n) && (j < m)) {
        if (x == 0) {
            if (arr1[i].harga < arr2[j].harga) {
                arr3[hitung] = arr1[i];
                i++;
                hitung++;
            } else if (arr2[j].harga < arr1[i].harga) {
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
        // jika patokan "rating"(descending)
        else if (x == 1) {
            if (arr1[i].rating > arr2[j].rating) {
                arr3[hitung] = arr1[i];
                i++;
                hitung++;
            } else if (arr2[j].rating > arr1[i].rating) {
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

// function untuk menghitung harga dan barang yang dibeli
void belanja(int n, wishlist arr1[], wishlist arr2[], int budget) {
    int total = 0;
    int i = 0, k = 0;
    // perulangan sebanyak data DAN selama budget melebihi harga barang
    while ((budget >= arr1[i].harga) && (i < n)) {
        total += arr1[i].harga;
        budget -= arr1[i].harga;
        i++;
        k++;  // iterasi k (banyak barang yang dibeli)
    }

    printf("barang yang dibeli:\n");
    printf("-------------------------------\n");
    if (total == 0) {
        printf("tidak ada barang yang dibeli\n");
    } else {
        for (int i = 0; i < k; i++) {
            printf("%s", arr2[i].nama_Barang);
            printf(" %d ", arr2[i].harga);
            printf("%.1f\n", arr2[i].rating);
        }
    }

    printf("===============================\n");
    printf("total belanja : Rp. %d\n", total);
    printf("sisa budget   : Rp. %d\n", budget);
    printf("===============================\n");
}