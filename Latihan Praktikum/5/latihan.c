#include <stdio.h>

typedef struct
{
    int pembilang, penyebut;
} pecahan;

void printAngka(int n, pecahan angka[]) {
    for (int i = 0; i < n; i++) {
        printf("%d  ", angka[i].pembilang);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("-  ");
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d  ", angka[i].penyebut);
    }
}

void bubbleSort(int n, pecahan angka[]) {
    int tempPembilang, tempPenyebut, swap;
    do {
        swap = 0;
        for (int i = 0; i < (n - 1); i++) {
            if ((angka[i].pembilang / angka[i].penyebut) > (angka[i + 1].pembilang / angka[i + 1].penyebut)) {
                tempPembilang = angka[i].pembilang;
                angka[i].pembilang = angka[i + 1].pembilang;
                angka[i + 1].pembilang = tempPembilang;

                tempPenyebut = angka[i].penyebut;
                angka[i].penyebut = angka[i + 1].penyebut;
                angka[i + 1].penyebut = tempPenyebut;

                swap = 1;
            }
        }
    } while (swap == 1);
}

void quickSort() {
}

int main() {
    // menerima masukan sejumlah n
    int n;
    scanf("%d", &n);
    pecahan angka[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &angka[i].pembilang);
        scanf("%d", &angka[i].penyebut);
    }
    char sorting;
    scanf(" %c", &sorting);

    // sorting
    if (sorting == 'b') {
        // bubble sorting
        bubbleSort(n, angka);
    } else if (sorting == 'q') {
    }

    // keluaran
    printAngka(n, angka);

    return 0;
}