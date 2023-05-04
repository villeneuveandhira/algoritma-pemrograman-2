#include "header.h"
int main()
{
    int n;                      // jumlah kasus
    scanf("%d", &n);            // scan
    data virus[n];              // panggil struct
    for (int i = 0; i < n; i++) // scan isi struct
    {
        scanf("%d", &virus[i].a);
        scanf("%d", &virus[i].b);
        scanf("%d", &virus[i].x);
    }
    for (int i = 0; i < n; i++) // print
    {
        printf("%d\n", rekursif(virus[i].x, virus[i].a, virus[i].b));
    }

    return 0;
}