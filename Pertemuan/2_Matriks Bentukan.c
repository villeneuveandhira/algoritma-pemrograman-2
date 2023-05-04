/*
_MATRIKS TIPE-BENTUKAN TITIK
*/

// #include <stdio.h>
// typedef struct {
//     int x, y;
// } titik;
// int main() {
//     titik matriks[4][4];
//     int i, j;
//     for (i = 0; i < 4; i++) {
//         for (j = 0; j < 4; j++) {
//             printf("\nmasukkan koodinat x:\n");
//             scanf("%d", &matriks[i][j].x);
//             printf("\nmasukkan koodinat y:\n");
//             scanf("%d", &matriks[i][j].y);
//         }
//     }
//     for (i = 0; i < 4; i++) {
//         for (j = 0; j < 4; j++) {
//             printf("koodinat x: %d\n", matriks[i][j].x);
//             printf("koodinat y: %d\n", matriks[i][j].y);
//         }
//     }
//     return 0;
// }

/*
_SIMULASI RGB PADA PIKSEL
*/

// #include <stdio.h>
// typedef struct {
//     int red, green, blue;
// } piksel;
// int main() {
//     int baris, kolom;
//     printf("masukkan banyaknya baris\n");
//     scanf("%d", &baris);
//     printf("masukkan banyaknya kolom\n");
//     scanf("%d", &kolom);
//     piksel arr[baris][kolom];
//     int b, k;
//     for (b = 0; b < baris; b++) {
//         for (k = 0; k < kolom; k++) {
//             arr[b][k].red = 255;
//             arr[b][k].green = 255;
//             arr[b][k].blue = 255;
//         }
//     }
//     arr[0][1].red = 0;
//     arr[0][1].green = 255;
//     arr[0][1].blue = 0;
//     for (b = 0; b < baris; b++) {
//         for (k = 0; k < kolom; k++) {
//             if ((arr[b][k].red == 255) && (arr[b][k].green == 255) && (arr[b][k].blue == 255)) {
//                 printf(" putih ");
//             } else if ((arr[b][k].red == 0) && (arr[b][k].green == 255) && (arr[b][k].blue == 0)) {
//                 printf(" hijau ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
_PEMAKAIAN MATRIKS UNTUK GAME TIC TAC TOE
*/

// #include <stdio.h>
// int main() {
//     system("cls");  // membersihkan layar
//     int papan[3][3];
//     int i, j, k;
//     for (i = 0; i < 3; i++) {  // inisialisasi papan diisi 0 semua
//         for (j = 0; j < 3; j++) {
//             papan[i][j] = 0;
//         }
//     }
//     int pemain = -1;     // pemain diset -1 sebagai penanda belum mulai
//     int x = -1, y = -1;  // x dan y juga diset -1
//     for (i = 0; i < 9; i++) {
//         if ((x != -1) && (y != -1)) {  // mengisi papan jika ada masukan
//             papan[x][y] = pemain;
//         }
//         printf("Kondisi Papan:\n");
//         printf("--------------\n");
//         for (j = 0; j < 3; j++) {
//             printf("| ");
//             for (k = 0; k < 3; k++) {
//                 if (papan[k][j] == 0) {  // jika papan kosong
//                     printf("  | ");
//                 } else if (papan[k][j] == 1) {  // papan pemain pertama
//                     printf("O | ");
//                 } else if (papan[k][j] == 2) {  // papan pemain kedua
//                     printf("X | ");
//                 }
//             }
//             printf("\n=============\n");
//         }
//         printf("\n");
//         if (pemain == 1) {  // pergantian pemain yang akan mengisi papan
//             pemain = 2;
//         } else {
//             pemain = 1;
//         }
//         printf("Masukkan X, Y (Pemain %d): ", pemain);
//         scanf("%d %d", &x, &y);  // meminta masukkan pemain
//         system("cls");           // membersihkan layar
//     }
//     return 0;
// }

/*
_ANIMASI SEDERHANA WALKING B
*/

// #include <stdio.h>
// #include <time.h>

// void wait(float x) {  // this is the procedure for making delay
//     time_t start;     // start time
//     time_t current;   // current time
//     time(&start);     // making the start time
//     do
//         time(&current);  // making the current time
//     while (difftime(current, start) < x);
// }

// int main() {
//     char arr[6][6];  // make the matrix
//     int i, j, x = -1, y = -1, jalan = 1;
//     for (i = 0; i < 6; i++) {
//         for (j = 0; j < 6; j++) {
//             arr[i][j] = '-';
//         }
//     }
//     while (1) {                     // looping forever
//         system("cls");              // clear the screen
//         if ((x >= 0) && (x < 6)) {  // setting back the cell which is filled with B before
//             arr[x][y] = '-';
//         }
//         if ((x == 6) && (y == 6)) {  // bottom border as the mark of going up
//             jalan = -1;
//             x = x - 1;
//             y = y - 1;
//         } else if ((x == -1) && (y == -1)) {  // upper border as the mark of going up
//             jalan = 1;
//             x = x + 1;
//             y = y + 1;
//         } else if (jalan == 1) {  // if the direction is still going down
//             x = x + 1;
//             y = y + 1;
//         } else {  // if the direction is still going up
//             x = x - 1;
//             y = y - 1;
//         }
//         if ((x >= 0) && (x < 6)) {
//             arr[x][y] = 'B';
//         }
//         for (i = 0; i < 6; i++) {
//             for (j = 0; j < 6; j++) {
//                 if (arr[i][j] == '-') {
//                     printf("    ");
//                 } else {
//                     printf(" %c ", arr[i][j]);
//                 }
//             }
//             printf("\n");
//         }
//         wait(1);  // the delay procedure for 1 second
//     }
//     return 0;
// }

/*
_PEMAKAIAN MATRIKS UNTUK PETA
*/