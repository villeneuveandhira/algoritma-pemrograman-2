#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[99];
    char jurusan[99];
    char fakultas[99];
} dataMahasiswa;

int main() {
    int i, n = 0;
    dataMahasiswa mhs[50];

    FILE *fmahasiswa;
    fmahasiswa = fopen("Mahasiswa.dat", "r");
    fscanf(fmahasiswa, "%s %s %s", mhs[n].nama, mhs[n].jurusan, mhs[n].fakultas);
    if (strcmp(mhs[n].nama, "####") == 0) {
        printf("File Kosong!\n");
    } else {
        while (strcmp(mhs[n].nama, "####") != 0) {
            n++;
            fscanf(fmahasiswa, "%s %s %s", mhs[n].nama, mhs[n].jurusan, mhs[n].fakultas);
        }
    }
    fclose(fmahasiswa);

    FILE *fjurusan;
    fjurusan = fopen("Jurusan.dat", "r");
    char kode_jurusan[50], nama_jurusan[99];
    fscanf(fjurusan, "%s %s", kode_jurusan, nama_jurusan);
    if (strcmp(kode_jurusan, "####") == 0) {
        printf("File Kosong!\n");
    } else {
        while (strcmp(kode_jurusan, "####") != 0) {
            for (int i = 0; i < n; i++) {
                if (strcmp(kode_jurusan, mhs[i].jurusan) == 0) {
                    strcpy(mhs[i].jurusan, nama_jurusan);
                }
            }
            fscanf(fjurusan, "%s %s", kode_jurusan, nama_jurusan);
        }
    }
    fclose(fjurusan);

    FILE *ffakultas;
    ffakultas = fopen("Fakultas.dat", "r");
    char kode_fakultas[50], nama_fakultas[99];
    fscanf(ffakultas, "%s %s", kode_fakultas, nama_fakultas);
    if (strcmp(kode_fakultas, "####") == 0) {
        printf("File Kosong!\n");
    } else {
        while (strcmp(kode_fakultas, "####") != 0) {
            for (int i = 0; i < n; i++) {
                if (strcmp(kode_fakultas, mhs[i].jurusan) == 0) {
                    strcpy(mhs[i].jurusan, nama_fakultas);
                }
            }
            fscanf(ffakultas, "%s %s", kode_fakultas, nama_fakultas);
        }
    }
    fclose(ffakultas);

    FILE *flatihan;
    flatihan = fopen("latihan.dat", "w");
    for (int i = 0; i < n; i++) {
        fprintf(flatihan, "%s %s %s\n", mhs[i].nama, mhs[i].jurusan, mhs[i].fakultas);
    }
    fprintf(flatihan, "#### #### ####\n");
    printf("Data Mahasiswa :\n", n);
    for (i = 0; i < n; i++) {
        printf("%s %s %s\n", mhs[i].nama, mhs[i].jurusan, mhs[i].fakultas);
    }
    fclose(flatihan);

    return 0;
}