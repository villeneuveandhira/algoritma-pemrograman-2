/*
Buatlah satu mesin karakter yang bisa menghitung jumlah suku kata “se” dalam
sebuah pita, dengan titik sebagai simbol akhir pita tersebut! Adapun keluarannya
adalah pita tanpa titik dan jumlah suku kata yang ditemukan.
*/

#include <stdio.h>

// global variable
int idx;
char cc;

// declaration of procedures & functions
void start(char str[]);
int eop();
void inc(char str[]);
void adv(char str[]);
int getidx();
char getcc();