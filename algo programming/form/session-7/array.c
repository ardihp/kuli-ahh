#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *list_user[3];
    char *name;

    for (int i = 0; i < 3; i++)
    {
        name = malloc(20);

        printf("Masukan nama orang ke-%d: ", i + 1);
        gets(name);

        list_user[i] = name;

        free(name);
    }

    printf("===========================\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Nama Orang ke-%d (%s) memiliki panjang %d huruf\n", i + 1, list_user[i], strlen(list_user[i]));
    }

    return 0;
}