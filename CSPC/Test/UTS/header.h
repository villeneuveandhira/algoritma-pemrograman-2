/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Ujian Tengah Semester
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    // array of tipe terstruktur yang berisi minyak goreng yang berisi nama merk minyak goreng, kandungan kalori dan kandungan lemak yang ada di dalamnya dan tentu harga dari minyak goreng tersebut.
    char nama_merk[99];
    int kalori,
        lemak,
        harga;
    // dihitung dengan semakin rendah hasil dari harga dibagi dengan jumlah kalori dan lemak, maka semakin baik minyak goreng ini diberikan kepada kaum pekerja.
    double kebutuhan;
    int sisabagi;
    // array per supplier
    int supplier;
} minyak;

// Deklarasi function/prosedure
void hitung(int n, minyak arr[]);
void print_Array(int n, minyak arr[]);
void print_Merged(int n, minyak arr[]);
void insertion_Sort(int n, minyak arr[]);
void selection_Sort(int n, minyak arr[]);
void bubble_Sort(int n, minyak arr[]);
void quick_Sort(int n, minyak arr[], int l, int r);
void merge_Terurut(int n, minyak arr1[], int m, minyak arr2[], minyak arr3[]);