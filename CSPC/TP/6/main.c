/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 6
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// program
int main() {
    /*INPUT*/
    // banyak data wishlist barang toko (nama_barang, harga, rating)
    int A, B, C;
    scanf("%d", &A);
    wishlist toko_1[A];
    for (int i = 0; i < A; i++) {
        scanf("%s", &toko_1[i].nama_Barang);
        scanf("%d", &toko_1[i].harga);
        scanf("%f", &toko_1[i].rating);
    }
    scanf("%d", &B);
    wishlist toko_2[B];
    for (int i = 0; i < B; i++) {
        scanf("%s", &toko_2[i].nama_Barang);
        scanf("%d", &toko_2[i].harga);
        scanf("%f", &toko_2[i].rating);
    }
    scanf("%d", &C);
    wishlist toko_3[C];
    for (int i = 0; i < C; i++) {
        scanf("%s", &toko_3[i].nama_Barang);
        scanf("%d", &toko_3[i].harga);
        scanf("%f", &toko_3[i].rating);
    }
    // budget
    int budget;
    scanf("%d", &budget);
    /* metode_sorting(i/s/b/q = insertion/selection/bubble/quick sort)
    patokan_sorting(harga/rating) */
    char metode;
    scanf(" %c", &metode);
    char patokan[99];
    scanf("%s", &patokan);

    /*CARA*/
    /*
    1. Memeriksa metode sorting yang digunakan;
    2. Melakukan sorting untuk setiap array masukkan;
    3. Menggabungkan array 1 & 2 menggunakan prosedur;
    4. Menggabungkan (gabungan array 1&2) dengan array 3;
    */
    wishlist temp[A + B];
    wishlist barang[A + B + C];
    if (metode == 'i') {  // untuk insertion sorting
        if (strcmp(patokan, "harga") == 0) {
            insertion_Sort(A, toko_1, 0);
            insertion_Sort(B, toko_2, 0);
            insertion_Sort(C, toko_3, 0);
            merge_Terurut(A, toko_1, B, toko_2, temp, 0);
            merge_Terurut(A + B, temp, C, toko_3, barang, 0);
        } else if (strcmp(patokan, "rating") == 0) {
            insertion_Sort(A, toko_1, 1);
            insertion_Sort(B, toko_2, 1);
            insertion_Sort(C, toko_3, 1);
            merge_Terurut(A, toko_1, B, toko_2, temp, 1);
            merge_Terurut(A + B, temp, C, toko_3, barang, 1);
        }
    } else if (metode == 's') {  // untuk selection sorting
        if (strcmp(patokan, "harga") == 0) {
            selection_Sort(A, toko_1, 0);
            selection_Sort(B, toko_2, 0);
            selection_Sort(C, toko_3, 0);
            merge_Terurut(A, toko_1, B, toko_2, temp, 0);
            merge_Terurut(A + B, temp, C, toko_3, barang, 0);
        } else if (strcmp(patokan, "rating") == 0) {
            selection_Sort(A, toko_1, 1);
            selection_Sort(B, toko_2, 1);
            selection_Sort(C, toko_3, 1);
            merge_Terurut(A, toko_1, B, toko_2, temp, 1);
            merge_Terurut(A + B, temp, C, toko_3, barang, 1);
        }
    } else if (metode == 'b') {  // untuk bubble sorting
        if (strcmp(patokan, "harga") == 0) {
            bubble_Sort(A, toko_1, 0);
            bubble_Sort(B, toko_2, 0);
            bubble_Sort(C, toko_3, 0);
            merge_Terurut(A, toko_1, B, toko_2, temp, 0);
            merge_Terurut(A + B, temp, C, toko_3, barang, 0);
        } else if (strcmp(patokan, "rating") == 0) {
            bubble_Sort(A, toko_1, 1);
            bubble_Sort(B, toko_2, 1);
            bubble_Sort(C, toko_3, 1);
            merge_Terurut(A, toko_1, B, toko_2, temp, 1);
            merge_Terurut(A + B, temp, C, toko_3, barang, 1);
        }
    } else if (metode == 'q') {  // untuk quick sorting
        if (strcmp(patokan, "harga") == 0) {
            quick_Sort(A, toko_1, 0, A - 1, 0);
            quick_Sort(B, toko_2, 0, B - 1, 0);
            quick_Sort(C, toko_3, 0, C - 1, 0);
            merge_Terurut(A, toko_1, B, toko_2, temp, 0);
            merge_Terurut(A + B, temp, C, toko_3, barang, 0);
        } else if (strcmp(patokan, "rating") == 0) {
            quick_Sort(A, toko_1, 0, A - 1, 1);
            quick_Sort(B, toko_2, 0, B - 1, 1);
            quick_Sort(C, toko_3, 0, C - 1, 1);
            merge_Terurut(A, toko_1, B, toko_2, temp, 1);
            merge_Terurut(A + B, temp, C, toko_3, barang, 1);
        }
    }

    /*OUTPUT*/
    // data wishlish Ana (tergabung dan terurut)
    printf("Wishlist Ana:\n");
    printf("-------------------------------\n");
    for (int i = 0; i < A + B + C; i++) {
        printf("%s", barang[i].nama_Barang);
        printf(" %d ", barang[i].harga);
        printf("%.1f\n", barang[i].rating);
    }
    printf("===============================\n");

    // data list barang yang dibeli
    belanja(A + B + C, barang, barang, budget);

    return 0;
}