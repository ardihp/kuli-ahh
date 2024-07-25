#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    int vokal;
    int konsonan;
} Month;

char *toLowerCase(char *s)
{
    char *string = s;

    for (int i = 0; i < strlen(string); i++)
    {
        string[i] = tolower(string[i]);
    }

    return string;
}

int main()
{
    Month months[12] = {{"Januari", 4, 3}, {"Februari", 4, 4}, {"Maret", 2, 3}, {"April", 2, 3}, {"Mei", 2, 1}, {"Juni", 2, 2}, {"Juli", 2, 2}, {"Agustus", 3, 5}, {"September", 3, 6}, {"Oktober", 3, 4}, {"November", 3, 5}, {"Desember", 3, 5}};

    char alphabet, input_user[30];
    int i, count = 0, list[12];

    printf("Masukkan huruf yang kamu inginkan (A - Z): ");
    alphabet = toupper(getch());

    for (i = 0; i < 12; i++)
    {
        if ((int)alphabet == (int)(months[i].name)[0])
        {
            list[count] = i;
            count++;
        }
    }

    if (count > 0)
    {
        printf("\n\nKumpulan Bulan yang berawalan huruf %c: \n", alphabet);
        for (i = 0; i < count; i++)
        {
            printf("%s", months[list[i]].name);

            if (i + 1 < count)
            {
                printf(", ");
            }
        }

        printf("\n\nMasukkan Bulan yang kamu sukai dari pilihan diatas: ");
        fgets(input_user, 30, stdin);
        input_user[strcspn(input_user, "\n")] = 0;

        int selected_month;
        typedef enum
        {
            false,
            true
        } boolean;

        boolean is_valid;

        for (i = 0; i < count; i++)
        {
            char *monthName;
            monthName = (char *)calloc(strlen(months[list[i]].name), sizeof(char));
            strcpy(monthName, months[list[i]].name);

            if (strcmp(toLowerCase(input_user), toLowerCase(monthName)) == 0)
            {
                selected_month = list[i];
                is_valid = true;
                break;
            }
            else
            {
                is_valid = false;
            }

            free(monthName);
        }

        if (is_valid == true)
        {
            printf("Bulan %s memiliki huruf vokal sebanyak %d karakter \ndan huruf konsonan (non-vokal) sebanyak %d karakter", months[selected_month].name, months[selected_month].vokal, months[selected_month].konsonan);
        }
        else
        {
            printf("Bulan tersebut tidak termasuk dalam pilihan diatas.");
        }
    }
    else
    {
        printf("\nTidak ada bulan yang berawalan dengan huruf %c.", alphabet);
        return 0;
    }
}