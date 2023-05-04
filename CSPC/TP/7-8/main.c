/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal tugas praktikum 8
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// program
int main() {
    int n = 0;  // counter data list film
    // declaration array of strings
    film list_movie[99], list_final[99];
    code list_sutradara[99], list_genre[99], list_bioskop[99];

    // file sequen for list-film-movie
    FILE *flistfilm;
    flistfilm = fopen("ListFilm.dat", "r");
    fscanf(flistfilm, "%s %s %s %s", list_movie[n].judul, list_movie[n].sutradara, list_movie[n].genre, list_movie[n].bioskop);
    if (strcmp(list_movie[n].judul, "####") == 0) {
        printf("File 'ListFilm.dat' is Empty!!\n");
    } else {
        while (strcmp(list_movie[n].judul, "####") != 0) {
            n++;
            fscanf(flistfilm, "%s %s %s %s", list_movie[n].judul, list_movie[n].sutradara, list_movie[n].genre, list_movie[n].bioskop);
        }
    }
    fclose(flistfilm);

    // file sequen for list-sutradara
    FILE *fsutradara;
    int a = 0;  // counter for 'sutradara'
    fsutradara = fopen("Sutradara.dat", "r");
    char kode_a[99], nama_a[99];
    fscanf(fsutradara, "%s %s", kode_a, nama_a);
    if (strcmp(kode_a, "####") == 0) {
        printf("File 'Sutradara.dat' is Empty!!\n");
    } else {
        while (strcmp(kode_a, "####") != 0) {
            a++;
            for (int i = 0; i < n; i++) {
                if (strcmp(kode_a, list_movie[i].sutradara) == 0) {
                    strcpy(list_sutradara[a].kode, kode_a);
                    strcpy(list_sutradara[a].nama, nama_a);
                    strcpy(list_final[i].sutradara, nama_a);
                }
            }
            fscanf(fsutradara, "%s %s", kode_a, nama_a);
        }
    }
    fclose(fsutradara);

    // file sequen for list-genre
    FILE *fgenre;
    int b = 0;  // counter for 'genre'
    fgenre = fopen("Genre.dat", "r");
    char kode_b[99], nama_b[99];
    fscanf(fgenre, "%s %s", kode_b, nama_b);
    if (strcmp(kode_b, "####") == 0) {
        printf("File 'Genre.dat' is Empty!!\n");
    } else {
        while (strcmp(kode_b, "####") != 0) {
            b++;
            for (int i = 0; i < n; i++) {
                if (strcmp(kode_b, list_movie[i].genre) == 0) {
                    strcpy(list_genre[b].kode, kode_b);
                    strcpy(list_genre[b].nama, nama_b);
                    strcpy(list_final[i].genre, nama_b);
                }
            }
            fscanf(fgenre, "%s %s", kode_b, nama_b);
        }
    }
    fclose(fgenre);

    // file sequen for list-bioskop
    FILE *fbioskop;
    int c = 0;  // counter for 'bioskop'
    fbioskop = fopen("Bioskop.dat", "r");
    char kode_c[99], nama_c[99];
    fscanf(fbioskop, "%s %s", kode_c, nama_c);
    if (strcmp(kode_c, "####") == 0) {
        printf("File 'Bioskop.dat' is Empty!!\n");
    } else {
        while (strcmp(kode_c, "####") != 0) {
            c++;
            for (int i = 0; i < n; i++) {
                if (strcmp(kode_c, list_movie[i].bioskop) == 0) {
                    strcpy(list_bioskop[c].kode, kode_c);
                    strcpy(list_bioskop[c].nama, nama_c);
                    strcpy(list_final[i].bioskop, nama_c);
                }
            }
            fscanf(fbioskop, "%s %s", kode_c, nama_c);
        }
    }
    fclose(fbioskop);

    // write data from copied string to list-final
    FILE *ffinal;
    ffinal = fopen("ListFilmFinal.dat", "w");
    for (int i = 0; i < n; i++) {
        strcpy(list_final[i].judul, list_movie[i].judul);
    }
    for (int i = 0; i < n; i++) {
        fprintf(ffinal, "%s %s %s %s\n", list_final[i].judul, list_final[i].sutradara, list_final[i].genre, list_final[i].bioskop);
    }
    fprintf(ffinal, "%s %s %s %s\n", "####", "####", "####", "####");
    fclose(ffinal);

    // Choosing options with switch case
    printf("Choose a menu option:\n");
    printf("[1] Show all data list from 'List-Film-Final'\n");
    printf("[2] Search data\n");
    printf("[0] Exit\n");
    printf("=======================================================\n");
    int menu;
    printf("Select Menu : ");
    scanf("%d", &menu);
    switch (menu) {
        // print all data from list-final
        case 1:
            printf("\n");
            print_Data(n, list_final);
            printf("Press Enter to Exit\n");
            getch();
            break;

        // search in certain list-data
        case 2:
            system("cls");
            printf("Search data in:\n");
            printf("[1] 'Sutradara.dat'\n");
            printf("[2] 'Genre.dat'\n");
            printf("[3] 'Bioskop.dat'\n");
            printf("[0] Exit\n");
            ("=======================================================\n");
            int find;
            printf("Select Menu : ");
            scanf("%d", &find);
            char search[99];
            switch (find) {
                // in 'sutradara.dat'
                case 1:
                    printf("Input code you want to search : ");
                    scanf("%s", &search);
                    bin_Search(list_sutradara, a, search);
                    break;
                // in 'genre.dat'
                case 2:
                    printf("Input code you want to search : ");
                    scanf("%s", &search);
                    bin_Search(list_genre, b, search);
                    break;
                // in 'bioskop.dat'
                case 3:
                    printf("Input code you want to search : ");
                    scanf("%s", &search);
                    bin_Search(list_bioskop, c, search);
                    break;

                default:
                    printf("Press Enter to Exit\n");
                    getch();
                    break;
            }

        default:
            getch();
            break;
    }

    return 0;
}