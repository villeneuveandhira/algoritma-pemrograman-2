/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal kuis 2
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// procedure to sorting (bubble-sort method)
void bubble_Sort(int n, missed arr[], int mark) {
    int i, stop;
    missed temp;
    do {
        stop = 0;
        // if it based on 'price' (ascending)
        for (i = 0; i < (n - 1); i++) {
            if (mark == 0) {
                if (arr[i].price > arr[i + 1].price) {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    stop = 1;
                }
            }
            // if it based on 'calories' (descending)
            else if (mark == 1) {
                if (arr[i].calories < arr[i + 1].calories) {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    stop = 1;
                }
            }
        }
    } while (stop == 1);
}

// procedure for binary-search
void bin_Search(int n, missed arr[], int search, int mark) {
    int i = 0, k = 0, found = 0;
    while ((i <= n) && (found == 0)) {
        if (mark == 0) {                   // if it based on 'price'
            k = (int)((i + n) / 2);        // divided by 2
            if (arr[k].price == search) {  // if match, found=1
                found = 1;
            } else {
                if (arr[k].price > search) {
                    n = k - 1;
                } else {
                    i = k + 1;
                }
            }
        }
        if (mark == 1) {                      // if it based on 'calories'
            k = (int)((i + n) / 2);           // divided by 2
            if (arr[k].calories == search) {  // if match, found=1
                found = 1;
            } else {
                if (arr[k].calories < search) {
                    n = k - 1;
                } else {
                    i = k + 1;
                }
            }
        }
    }
    if (found == 1) {
        printf("nama makanan: %s\n", arr[k].name);
        printf("harga: %d\n", arr[k].price);
        printf("tempat penjualan: %s\n", arr[k].place);
        printf("persen kalori: %d\n", arr[k].calories);
    } else {
        printf("tidak ditemukan\n");
    }
}
