#include <stdio.h>
#include "billing.h"
#include "grade.h"

void printMainHeader()
{
    printf("===============================================================\n");
    printf("===                      Pilihan Menu                       ===\n");
    printf("===============================================================\n");
    printf("===  Ketik (1) untuk aplikasi perhitungan billing           ===\n");
    printf("===  Ketik (2) untuk aplikasi perhitungan nilai mahasiswa   ===\n");
    printf("===============================================================\n");
}

int main()
{
    int menuSelect;

    printMainHeader();

    printf("Masukan pilihan kamu: ");

    while (scanf(" %d", &menuSelect) == 0)
    {
        printf("Input hanya menerima angka: ");
        scanf("%*s");
    }

    printf("\n\n");

    switch (menuSelect)
    {
    case 1:
        billingApp();
        break;
    case 2:
        gradeCalculatorApp();
        break;
    default:
        printf("Pilihan kamu tidak tersedia.");
        return 0;
    }

    return 0;
}