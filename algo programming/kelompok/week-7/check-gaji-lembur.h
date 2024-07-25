#include "check-gaji-pokok.h"

Employee EmployeeReceiver2(Employee data)
{
    printf("Nomor Induk Pegawai (NIP) : ");
    fgets(data.NIP, sizeof(data.NIP), stdin);

    printf("====================================\n");
    printf("Golongan yang tersedia: D1, D2, D3\n");
    printf("====================================\n");

    printf("Golongan : ");
    scanf("%s", data.golongan);

    if (strcmp(data.golongan, "D1") == 0)
    {
        data.gaji_pokok = 2500000;
        data.gaji_lembur = data.jam_lembur * 10000;
        data.total_gaji = data.gaji_pokok + data.gaji_lembur;
    }
    else if (strcmp(data.golongan, "D2") == 0)
    {
        data.gaji_pokok = 2000000;
        data.gaji_lembur = data.jam_lembur * 5000;
        data.total_gaji = data.gaji_pokok + data.gaji_lembur;
    }
    else if (strcmp(data.golongan, "D3") == 0)
    {
        data.gaji_pokok = 1500000;
        data.gaji_lembur = data.jam_lembur * 2500;
        data.total_gaji = data.gaji_pokok + data.gaji_lembur;
    }
    else
    {
        printf("Golongan tersebut tidak ada.\n");
        exit(1);
    }

    printf("Lama Lembur (jam) : ");
    scanf("%d", &data.jam_lembur);

    return data;
}

void CheckGajiLembur()
{
    Employee data;

    printf("====================================\n");

    data = EmployeeReceiver2(data);

    printf("Gaji Lembur Bulan ini : Rp%.lf", data.gaji_lembur);
    printf("\nTotal Gaji Bulan ini : Rp%.lf", data.total_gaji);
}