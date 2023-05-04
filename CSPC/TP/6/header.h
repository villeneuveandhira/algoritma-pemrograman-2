/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 6
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

// deklarasi matriks bungkusan
typedef struct {
    char nama_Barang[99];
    int harga;
    float rating;
} wishlist;

// deklarasi fungsi/prosedur
void insertion_Sort(int n, wishlist arr[], int x);
void selection_Sort(int n, wishlist arr[], int x);
void bubble_Sort(int n, wishlist arr[], int x);
void quick_Sort(int n, wishlist arr[], int l, int r, int x);
void merge_Terurut(int n, wishlist arr1[], int m, wishlist arr2[], wishlist arr3[], int x);
void belanja(int n, wishlist arr1[], wishlist arr2[], int budget);