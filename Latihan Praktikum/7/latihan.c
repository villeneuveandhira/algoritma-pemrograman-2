/*
// NOMOR 1
#include <stdio.h>

int cari_Angka(int n, int arr[], int find) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < find && max < arr[i]) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    printf("Program untuk mencari angka terbesar yang lebih kecil dari angka inputan user.\n");
    printf("Masukkan jumlah data:");
    int n;
    scanf("%d", &n);
    printf("Masukkan data\n");
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("angka terbesar:\n");
    int find;
    scanf("%d", &find);

    printf("%d\n", cari_Angka(n, arr, find));

    return 0;
}*/

/*
// NOMOR 2
#include <stdio.h>
#include <string.h>

int sequential_count(char arr[][20], int n, char search[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (strcasecmp(arr[i], search) == 0) count++;
    }
    return count;
}

int main() {
    char string[100];
    scanf("%[^\n]", string);

    char search[20];
    scanf("%s", search);

    int length = strlen(string);
    int n = 1;
    for (int i = 0; i < length; i++)
        if (string[i] == ' ') n++;

    char arr[n][20];

    char* token = strtok(string, " ");
    int i = 0;
    while (token != NULL) {
        strcpy(arr[i], token);
        int l = strlen(arr[i]);
        if (arr[i][l - 1] == ',') arr[i][l - 1] = '\0';
        // printf("%s\n", arr[i]);
        token = strtok(NULL, " ");
        i++;
    }

    printf("%i\n", sequential_count(arr, n, search));
    return 0;
}*/

FILE *ffinal;
ffinal = fopen("ListFilmFinal.dat", "w");
for (int i = 0; i < n; i++) {
    strcpy(list_final[i].judul, list_movie[i].judul);
    fprintf(ffinal, "%s %s %s %s\n", list_final[i].judul, list_final[i].sutradara, list_final[i].genre, list_final[i].bioskop);
}
fprintf(ffinal, "%s %s %s %s\n", "####", "####", "####", "####");
fclose(ffinal);