#include <stdio.h>

// function prosedur untuk menampilkan isi array
void printArray(int n, char arr[]) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

// program
int main() {
    // masukan:
    int n, i, j, k = 0;
    scanf("%d", &n);
    char arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%s", &arr[i]);
    }

    // menampilkan array:
    printArray(n, arr);

    // sorting:
    char kata[99];
    for (i = 1; i < n; i++) {
        kata[k] = arr[i];
        j = i - 1;
        while (j > kata[k] && kata[k] < arr[i]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = kata[k];
        k++;
    }

    printArray(n, arr);

    return 0;
}