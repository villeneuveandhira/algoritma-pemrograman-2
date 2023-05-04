/* Buatlah Program untuk menggabungkan 3 buah array daftar nama mahasiswa yang
didapat dari inputan. Hasil dari penggabungan tersebut harus terurut secara
descending (z-a). */

#include <stdio.h>
#include <string.h>

void bubble_Sorting(int n, char arr[][99]) {
    int swap;
    char temp_Nama[99];
    do {
        swap = 0;
        for (int i = 0; i < n - 1; i++) {
            if (strcmp(arr[i], arr[i + 1]) < 0) {
                strcpy(temp_Nama, arr[i]);
                strcpy(arr[i], arr[i + 1]);
                strcpy(arr[i + 1], temp_Nama);

                swap = 1;
            }
        }
    } while (swap == 1);
}

void scan_Input(int n, char arr[][99]) {
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }
    bubble_Sorting(n, arr);
}

void print_Output(int n, char arr[][99]) {
    printf("===============\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

void merge_Terurut(int n, char arr1[][99], int m, char arr2[][99], char arr3[][99]) {
    int i = 0, j = 0;
    int hitung = 0;
    int sisa;

    while ((i < n) && (j < m)) {
        if (strcmp(arr1[i], arr2[j]) > 0) {
            strcpy(arr3[hitung], arr1[i]);
            i++;
            hitung++;
        } else if (strcmp(arr2[j], arr1[i]) > 0) {
            strcpy(arr3[hitung], arr2[j]);
            j++;
            hitung++;
        } else {
            strcpy(arr3[hitung], arr1[i]);
            i++;
            hitung++;
            strcpy(arr3[hitung], arr2[j]);
            j++;
            hitung++;
        }
    }
    if (i < n) {
        for (sisa = i; sisa < n; sisa++, hitung++) {
            strcpy(arr3[hitung], arr1[sisa]);
        }
    }
    if (j < m) {
        for (sisa = j; sisa < m; sisa++, hitung++) {
            strcpy(arr3[hitung], arr2[sisa]);
        }
    }
}

int main() {
    int n, n1, n2, n3;

    // INPUT
    scanf("%d", &n1);
    char arr1[n1][99];
    scan_Input(n1, arr1);  // array pertama

    scanf("%d", &n2);
    char arr2[n2][99];
    scan_Input(n2, arr2);  // array kedua

    char temp[n1 + n2][99];
    merge_Terurut(n1, arr1, n2, arr2, temp);  // merge array 1 & 2

    scanf("%d", &n3);
    char arr3[n3][99];
    scan_Input(n3, arr3);  // array ketiga

    char merge[n1 + n2 + n3][99];
    merge_Terurut(n1 + n2, temp, n3, arr3, merge);  // merge array 3

    // OUTPUT
    print_Output(n1 + n2 + n3, merge);

    return 0;
}