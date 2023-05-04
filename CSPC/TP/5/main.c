/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 5
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main() {
    // n, jumlah data
    int n;
    scanf("%d", &n);

    // judul film, durasi jam, dan durasi menit sejumlah n
    film data[n];
    for (int i = 0; i < n; i++) {
        scanf("%s", &data[i].judul);
        scanf("%d", &data[i].jam);
        scanf("%d", &data[i].menit);
    }

    // metode sorting (bubble/quick)
    char metode;
    scanf(" %c", &metode);

    // urutan (ascending/descending)
    char urutan;
    scanf(" %c", &urutan);

    // mengurutkan film berdasarkan durasi
    printf("Data Film Terurut :\n");

    // b=bubble,
    if (metode == 'b') {
        // jika ascending
        if (urutan == 'a') {
            bubbleSort(n, data, 0);
        }
        // jika descending
        else if (urutan == 'd') {
            bubbleSort(n, data, 1);
        }
    }
    // q=quick,
    if (metode == 'q') {
        // jika ascending
        if (urutan == 'a') {
            quickSort(n, data, 0, n - 1, 0);
            printArray(n, data);
        }
        // jika descending
        else if (urutan == 'd') {
            quickSort(n, data, 0, n - 1, 1);
            printArray(n, data);
        }
    }

    // durasi total (jam dan menit)
    int totalJam = 0, totalMenit = 0;
    for (int i = 0; i < n; i++) {
        totalJam = totalJam + data[i].jam;
        totalMenit = totalMenit + data[i].menit;
        if (totalMenit >= 60) {
            totalMenit %= 60;
            totalJam += 1;
        }
    }
    printf("\nTotal Durasi : %d jam %d menit\n", totalJam, totalMenit);

    return 0;
}