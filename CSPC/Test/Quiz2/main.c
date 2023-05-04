/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal kuis 2
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// program
int main() {
    // amount of array data (0 < n < 50)
    int n;
    scanf("%d", &n);

    // input array data
    missed food[n];
    for (int i = 0; i < n; i++) {
        scanf("%s", &food[i].name);
        scanf("%d", &food[i].price);
        scanf("%s", &food[i].place);
        scanf("%d", &food[i].calories);
    }

    // order based on price or calories
    char order[99];
    scanf("%s", &order);

    // the price or the calories that user looking for
    int search;
    scanf("%d", &search);

    // search data with binary-search (sorting before search)
    if (strcmp(order, "harga") == 0) {  // if it based on price, then mark = 0
        bubble_Sort(n, food, 0);
        bin_Search(n, food, search, 0);
    } else if (strcmp(order, "kalori") == 0) {  // if it based on price, then mark = 1
        bubble_Sort(n, food, 1);
        bin_Search(n, food, search, 1);
    }

    return 0;
}