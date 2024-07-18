#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char NIP[30];
    char nama[30];
    char alamat[255];
    char no_hp[15];
    char jabatan[255];
    char golongan[2];
    int jam_lembur;
    double gaji_pokok, gaji_lembur, total_gaji;
} Employee;

Employee EmployeeReceiver(Employee data)
{
    printf("Nomor Induk Pegawai (NIP) : ");
    fgets(data.NIP, sizeof(data.NIP), stdin);

    printf("Nama : ");
    fgets(data.nama, sizeof(data.nama), stdin);

    printf("Alamat : ");
    fgets(data.alamat, sizeof(data.alamat), stdin);

    printf("Nomor HP : ");
    fgets(data.no_hp, sizeof(data.no_hp), stdin);

    printf("Jabatan : ");
    fgets(data.jabatan, sizeof(data.jabatan), stdin);

    printf("====================================\n");
    printf("Golongan yang tersedia: D1, D2, D3\n");
    printf("====================================\n");

    printf("Golongan : ");
    scanf("%s", data.golongan);

    if (strcmp(data.golongan, "D1") == 0)
    {
        data.gaji_pokok = 2500000;
    }
    else if (strcmp(data.golongan, "D2") == 0)
    {
        data.gaji_pokok = 2000000;
    }
    else if (strcmp(data.golongan, "D3") == 0)
    {
        data.gaji_pokok = 1500000;
    }
    else
    {
        printf("Golongan tersebut tidak ada.\n");
        exit(1);
    }

    return data;
}

void CheckGajiPokok()
{
    Employee data;

    printf("====================================\n");

    data = EmployeeReceiver(data);

    printf("Gaji Pokok : Rp%.lf", data.gaji_pokok);
}