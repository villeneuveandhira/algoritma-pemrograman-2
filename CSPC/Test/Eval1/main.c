/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Evaluasi 1
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main() {
    /* INPUT */
    // banyak daya mahasiswa kelompok pertama
    int n;
    scanf("%d", &n);
    mahasiswa kelompok_pertama[n];
    for (int i = 0; i < n; i++) {
        scanf("%s", &kelompok_pertama[i].NIM);
        scanf("%s", &kelompok_pertama[i].nama);
        scanf("%d", &kelompok_pertama[i].nilai);
    }
    bubblesort_NIM(n, kelompok_pertama);  // sorting NIM
    // banyak daya mahasiswa kelompok kedua
    int m;
    scanf("%d", &m);
    mahasiswa kelompok_kedua[m];
    for (int i = 0; i < m; i++) {
        scanf("%s", &kelompok_kedua[i].NIM);
        scanf("%s", &kelompok_kedua[i].nama);
        scanf("%d", &kelompok_kedua[i].nilai);
    }
    bubblesort_NIM(m, kelompok_kedua);  // sorting NIM
    // banyak daya mahasiswa kelompok ketiga
    int p;
    scanf("%d", &p);
    mahasiswa kelompok_ketiga[p];
    for (int i = 0; i < p; i++) {
        scanf("%s", &kelompok_ketiga[i].NIM);
        scanf("%s", &kelompok_ketiga[i].nama);
        scanf("%d", &kelompok_ketiga[i].nilai);
    }
    bubblesort_NIM(p, kelompok_ketiga);  // sorting NIM

    /* MERGE ARRAY */
    mahasiswa temp[n + m];
    mahasiswa baru[n + m + p];
    merge_Terurut(n, kelompok_pertama, m, kelompok_kedua, temp);
    merge_Terurut(n + m, temp, p, kelompok_ketiga, baru);

    /* membagi tabel menjadi dua bagian */
    int x;
    x = (n + m + p) / 2;
    mahasiswa baru_satu[x];
    mahasiswa baru_dua[x];
    int i = 0;  // iterator looping sebanyak data array merged
    int j = 0;  // iterator untuk @array bagian baru
    while (i < x) {
        baru_satu[j] = baru[i];
        i++;
        j++;
    }
    j = 0;
    while (i < x * 2) {
        baru_dua[j] = baru[i];
        i++;
        j++;
    }
    // sorting nilai
    bubblesort_Nilai(x, baru_satu);
    bubblesort_Nilai(x, baru_dua);

    /* OUTPUT */
    print_Output(n + m + p, baru);
    print_Output(x, baru_satu);
    print_Output(x, baru_dua);
    printf("====================\n");

    return 0;
}