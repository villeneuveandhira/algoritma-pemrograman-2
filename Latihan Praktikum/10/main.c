#include "header.h"

// program membaca kata satu per satu dari pita menggunakan mesin kata
int main() {
    // deklarasi variabel jumlah perintah dan pita
    int i, n;
    char tape[128];
    student data[52];  // hardcode saja, kan cuma contoh~

    // masukan
    printf("Masukkan jumlah perintah : ");
    scanf("%d", &n);

    // memulai perulangan untuk menjalankan setiap perintah
    for (i = 0; i < n; i++) {
        scanf(" %127[^\n]s", &tape);  // pakai spasi sebelum lambang %
        modifydata(tape, &data[i]);   // belum termasuk error handling...
    }

    for (i = 0; i < n; i++) {
        printf("%d. %s %s %s\n", (i + 1), data[i].nim, data[i].nama, data[i].nilai);
    }

    // akhir program
    return 0;
}
