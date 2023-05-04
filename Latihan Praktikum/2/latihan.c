// LATIHAN 1
/*
#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[100];
    int red, green, blue;
} warna;

void output(int m, warna temp[][m], int i, int j) {
    printf("Detail merah : %d\n", temp[i][j].red);
    printf("Detail hijau : %d\n", temp[i][j].green);
    printf("Detail biru : %d\n", temp[i][j].blue);
    printf("-----------------\n");
}

int main() {
    int n, m, i, j;
    char temp[100];
    scanf("%d %d", &n, &m);

    warna rgb[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%s", &rgb[i][j].nama);
            scanf("%d", &rgb[i][j].red);
            scanf("%d", &rgb[i][j].green);
            scanf("%d", &rgb[i][j].blue);
        }
    }

    scanf("%s", &temp);
    int stat;
    for (i = 0; i < n; i++) {
        stat = 0;
        printf("Baris %d :\n", i + 1);
        for (j = 0; j < m; j++) {
            if (strcmp(rgb[i][j].nama, temp) == 0) {
                output(m, rgb, i, j);
                stat++;
            }
        }
        if (stat == 0) {
            printf("TIDAK ADA.\n");
        }
        printf("======================================\n");
    }

    return 0;
}*/

// LATIHAN 2
/*
#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[100];
    int nilai;
} mahasiswa;

int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    mahasiswa data[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%s %d", &data[i][j].nama, &data[i][j].nilai);
        }
    }

    int temp;
    char nama1[100], nama2[100];
    scanf("%s %s", nama1, nama2);

    int titik1[2], titik2[2];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (strcmp(nama1, data[i][j].nama) == 0) {
                titik1[0] = i;
                titik1[1] = j;
            } else if (strcmp(nama2, data[i][j].nama) == 0) {
                titik2[0] = i;
                titik2[1] = i;
            }
        }
    }

    temp = data[titik1[0]][titik1[1]].nilai;
    data[titik1[0]][titik1[1]].nilai = data[titik2[0]][titik2[1]].nilai;
    data[titik2[0]][titik2[1]].nilai = temp;

    printf("\nMatriks sesudah ditukar:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%s %d\n", data[i][j].nama, data[i][j].nilai);
        }
    }

    return 0;
}*/