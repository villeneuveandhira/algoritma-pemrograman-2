#include "header.h"
int rekursif(int x, int a, int b)
{
    if (x == 0)      // jika x=0 atau jumlah awal virus
        return a;    // maka return a, a artinya return jumlah awal virus
    else if (x == 1) // jika x=1 atau di jam pertama
        return b;    // return b, b disini sesuai inputan yaitu jumlah virus di jam pertama
    else
        return ((2 * x * rekursif(x - 1, a, b)) + (rekursif(x - 2, a, b) * rekursif(x - 2, a, b))) - 1; // selain itu, return sesuai rumus di soal
}