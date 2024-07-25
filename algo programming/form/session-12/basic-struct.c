#include <stdio.h>

struct employee
{
    int id;
    char name[32];
};

typedef struct employee EMP;

EMP DataReceiver(EMP data)
{
    printf("Masukkan nama kamu : ");
    gets(data.name);
    printf("Masukkan ID Employee kamu : ");
    scanf("%d", &data.id);

    return data;
}

int main()
{
    EMP info = {10, "Puhdidi"};

    printf("Contoh data Employee:\n");
    printf("Nama Employee: %s \n", info.name);
    printf("ID Employee  : %d \n\n", info.id);

    info = DataReceiver(info);

    printf("\nIni data Employee kamu:\n");
    printf("Nama Employee: %s \n", info.name);
    printf("ID Employee  : %d", info.id);

    return 0;
}
