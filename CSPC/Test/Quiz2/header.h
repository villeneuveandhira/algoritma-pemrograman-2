/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal kuis 2
dalam mata kuliah algoritma dan pemrograman 2
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

// struct data
typedef struct {
    char name[99];   // string of the food name
    int price;       // integer of the food price
    char place[99];  // string of the place
    int calories;    // integer of the calories percentage
} missed;

// function declaration
void bubble_Sort(int n, missed arr[], int mark);
void bin_Search(int n, missed arr[], int search, int mark);