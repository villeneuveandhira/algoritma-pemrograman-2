/*
// NOMOR 1
#include <stdio.h>

void alfabet(int x) {
    printf("%c\n", x);
    if ((x > 'a') && (x <= 'z')) {
        alfabet(x - 1);
    }
}

int main() {
    alfabet('z');
    return 0;
}*/

/*
// NOMOR 2
#include <stdio.h>

void biner(int n) {
    if (n > 0) {
        biner(n / 2);
    } else {
        return 0;
    }
    printf("%d", n % 2);

}

int main() {
    int bilangan;
    printf("masukkan angka:\n");
    scanf("%d", &bilangan);
    biner(bilangan);
    return 0;
}*/

/*
// NOMOR 3
#include <stdio.h>

void x(int n, int m) {
    printf("(%d|%d)\n", n, m);
    if (n > 1) {
        x(n / 2, m * 2);
    }
}

int main() {
    int n, m;
    printf("Masukkan angka n dan m:\n");
    scanf("%d %d", &n, &m);
    x(n, m);
    return 0;
}*/