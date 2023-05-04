/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Ujian Tengah Semester
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main() {
    // baris isi elemen array terdiri dari merek, jumlah kalori, jumlah lemak, dan harga
    char metode[99];
    scanf("%s", &metode);

    // n1 jumlah elemen array pertama
    int n1;
    scanf("%d", &n1);
    minyak arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%s", &arr1[i].nama_merk);
        scanf("%d", &arr1[i].kalori);
        scanf("%d", &arr1[i].lemak);
        scanf("%d", &arr1[i].harga);
        arr1[i].supplier = 1;
    }
    // n2 jumlah elemen array pertama
    int n2;
    scanf("%d", &n2);
    minyak arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%s", &arr2[i].nama_merk);
        scanf("%d", &arr2[i].kalori);
        scanf("%d", &arr2[i].lemak);
        scanf("%d", &arr2[i].harga);
        arr2[i].supplier = 2;
    }
    // n3 jumlah elemen array pertama
    int n3;
    scanf("%d", &n3);
    minyak arr3[n3];
    for (int i = 0; i < n3; i++) {
        scanf("%s", &arr3[i].nama_merk);
        scanf("%d", &arr3[i].kalori);
        scanf("%d", &arr3[i].lemak);
        scanf("%d", &arr3[i].harga);
        arr3[i].supplier = 3;
    }

    // variabel merged array
    minyak temp[n1 + n2];
    minyak semua[n1 + n2 + n3];

    printf("Per Supplier:\n");
    // Insertion-sorting
    if (strcmp(metode, "is") == 0) {
        printf("Supplier 1:\n");
        insertion_Sort(n1, arr1);
        printf("\nSupplier 2:\n");
        insertion_Sort(n2, arr2);
        printf("\nSupplier 3:\n");
        insertion_Sort(n3, arr3);

        printf("\nSemua:\n");
        merge_Terurut(n1, arr1, n2, arr2, temp);
        merge_Terurut(n1 + n2, temp, n3, arr3, semua);
        print_Merged(n1 + n2 + n3, semua);
    }
    // Selection-sorting
    else if (strcmp(metode, "ss") == 0) {
        printf("Supplier 1:\n");
        selection_Sort(n1, arr1);
        printf("\nSupplier 2:\n");
        selection_Sort(n2, arr2);
        printf("\nSupplier 3:\n");
        selection_Sort(n3, arr3);

        printf("\nSemua:\n");
        merge_Terurut(n1, arr1, n2, arr2, temp);
        merge_Terurut(n1 + n2, temp, n3, arr3, semua);
        print_Merged(n1 + n2 + n3, semua);
    }
    // Bubble-sorting
    else if (strcmp(metode, "bs") == 0) {
        printf("Supplier 1:\n");
        bubble_Sort(n1, arr1);
        printf("\nSupplier 2:\n");
        bubble_Sort(n2, arr2);
        printf("\nSupplier 3:\n");
        bubble_Sort(n3, arr3);

        printf("\nSemua:\n");
        merge_Terurut(n1, arr1, n2, arr2, temp);
        merge_Terurut(n1 + n2, temp, n3, arr3, semua);
        print_Merged(n1 + n2 + n3, semua);
    }
    // Quick-sorting
    else if (strcmp(metode, "qs") == 0) {
        printf("Supplier 1:\n");
        quick_Sort(n1, arr1, 0, n1 - 1);
        print_Array(n1, arr1);
        printf("\nSupplier 2:\n");
        quick_Sort(n2, arr2, 0, n2 - 1);
        print_Array(n2, arr2);
        printf("\nSupplier 3:\n");
        quick_Sort(n3, arr3, 0, n3 - 1);
        print_Array(n3, arr3);

        printf("\nSemua:\n");
        merge_Terurut(n1, arr1, n2, arr2, temp);
        merge_Terurut(n1 + n2, temp, n3, arr3, semua);
        print_Merged(n1 + n2 + n3, semua);
    }

    return 0;
}