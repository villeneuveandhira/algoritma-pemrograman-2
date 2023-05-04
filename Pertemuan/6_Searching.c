/*
// SEQUENTIAL SEARCH
// periksa apakah ada 2 orang atau lebih mahasiswa dalam tabel yang memiliki nama diawali dengan huruf 'A'
#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[99];
} mahasiswa;

void find_data(int n, char find, mahasiswa arr[], mahasiswa new_arr[]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].nama[0] == find) {
            strcpy(new_arr[k].nama, arr[i].nama);
            k++;
        }
    }

    for (int i = 0; i < k; i++) {
        if (k > 2) {
            printf("Nama : %s\n", new_arr[i].nama);
        } else {
            printf("Nama tidak ditemukan atau kurang dari 2\n");
        }
    }
}

int main() {
    printf("Berapa banyak data? ");
    int n;
    scanf("%d", &n);

    mahasiswa upi[n];
    printf("Masukkan daftar nama:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", &upi[i].nama);
    }

    printf("Input inisial huruf yang ingin dicari:");
    char inisial;
    scanf(" %c", &inisial);

    mahasiswa new_data[99];
    find_data(n, inisial, upi, new_data);

    return 0;
}
*/

// BINARY SEARCH
//