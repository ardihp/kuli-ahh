#include <stdio.h>

int sum(int x, int y)
{
    printf("Menghitung angka yang anda berikan...\n");

    return x + y;
}

int main()
{
    int x, y;

    printf("Masukkan angka pertama yang akan ditambahkan: ");
    scanf(" %d", &x);

    printf("Masukkan angka kedua yang akan ditambahkan: ");
    scanf(" %d", &y);

    printf("\nHasil perhitungan %d + %d adalah %d", x, y, sum(x, y));

    return 0;
}