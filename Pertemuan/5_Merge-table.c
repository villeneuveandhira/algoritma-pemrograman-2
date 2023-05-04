#include <stdio.h>

void bubbleSort(int n, int arr[]) {
    int temp, swap;
    do {
        swap = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swap = 1;
            }
        }
    } while (swap == 1);
}
int main() {
    /*
    //====================TIDAK TERURUT====================//
    int arr1[5];  // deklarasi array 1
    int arr2[3];  // deklarasi array 2
    int arr3[8];  // deklarasi array 3
    printf("arr1[5]:\n");
    for (int i = 0; i < 5; i++) {  // mengisi array 1
        scanf("%d", &arr1[i]);
    }
    printf("arr2[3]:\n");
    for (int i = 0; i < 3; i++) {  // mengisi array 2
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < 5; i++) {  // memasukkan angka dari array 1
        arr3[i] = arr1[i];
    }
    for (int i = 5; i < 8; i++) {  // memasukkan angka dari array 2
        arr3[i] = arr2[i - 5];
    }
    printf("Merge Table:\n");
    for (int i = 0; i < 8; i++) {  // menampilkan array 3
        printf("%d\n", arr3[i]);
    }
    */
    /*
    //====================TERURUT====================//
    int arr1[5];        // deklarasi array 1
    int arr2[3];        // deklarasi array 2
    int arr3[8];        // deklarasi array 3
    int i1, i2, i3, i;  // penghitung
    printf("arr1[5]:\n");
    for (i1 = 0; i1 < 5; i1++) {  // mengisi array 1
        scanf("%d", &arr1[i1]);
    }
    printf("arr2[3]:\n");
    for (i2 = 0; i2 < 3; i2++) {  // mengisi array 2
        scanf("%d", &arr2[i2]);
    }
    bubbleSort(5, arr1);  // sorting array 1
    bubbleSort(3, arr2);  // sorting array 2
    i1 = 0;
    i2 = 0;
    i3 = 0;
    while ((i1 < 5) && (i2 < 3)) {         // looping membandingkan
        if (arr1[i1] < arr2[i2]) {         // jika angka array 1 < array 2
            arr3[i3] = arr1[i1];           // memasukkan angka
            i1++;                          // iterasi penghitung 1
            i3++;                          // iterasi penghitung 3
        } else if (arr2[i2] < arr1[i1]) {  // jika angka array 2 < array 1
            arr3[i3] = arr2[i2];           // memasukkan angka
            i2++;                          // iterasi penghitung 2
            i3++;                          // iterasi penghitung 3
        } else {                           // jika
            arr3[i3] = arr1[i1];           // memasukkan angka
            i1++;                          // iterasi penghitung 1
            i3++;                          // iterasi penghitung 3
            arr3[i3] = arr2[i2];           // memasukkan angka
            i2++;                          // iterasi penghitung 2
            i3++;                          // iterasi penghitung 3
        }
    }
    if (i1 < 5) {
        for (i = i1; i < 5; i++) {  // jika array 1 masih tersisa
            arr3[i3] = arr1[i];     // memasukkan sisa ke array 3
            i3++;                   // iterasi penghitung 3
        }
    }
    if (i2 < 3) {
        for (i = i2; i < 3; i++) {  // jika array 2 masih tersisa
            arr3[i3] = arr2[i];     // memasukkan sisa ke array 3
            i3++;                   // iterasi penghitung 3
        }
    }
    printf("Merge Table:\n");
    for (i = 0; i < 8; i++) {  // menampilkan array 3
        printf("%d\n", arr3[i]);
    }
    */
    /**/
    //====================Lebih dari 2 array====================//

    return 0;
}
