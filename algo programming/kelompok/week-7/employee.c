#include <stdio.h>
#include "check-gaji-lembur.h"

int main()
{
    int menu;

    printf("====================================\n");
    printf("Daftar Pilihan Menu\n");
    printf("====================================\n");
    printf("1. Cek Gaji Pokok Pegawai\n");
    printf("2. Cek Gaji dengan lembur Pegawai\n");
    printf("====================================\n");
    printf("Masukan Pilihan Menu: ");
    scanf("%d", &menu);

    printf("\n");
    getchar();

    if (menu == 1)
    {
        CheckGajiPokok();
    }
    else if (menu == 2)
    {
        CheckGajiLembur();
    }
    else
    {
        printf("Pilihan tersebut tidak ada.");
        return 0;
    }
}