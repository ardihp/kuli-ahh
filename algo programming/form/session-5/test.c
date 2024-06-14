#include <stdio.h>

int main()
{
    char a, b;

    printf("Masukkan huruf pertama: ");
    scanf(" %c", &a);

    printf("Masukkan huruf kedua: ");
    scanf(" %c", &b);

    if (a == b)
    {
        printf("\nHuruf sama!");
    }
    else
    {
        printf("\nHuruf tidak sama!");
    }

    return (0);
}