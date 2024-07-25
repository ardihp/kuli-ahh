#include <stdio.h>

int LinearSearch(int list_number[], int number_length, int value)
{
    for (int i = 0; i < number_length; i++)
    {
        if (list_number[i] == value)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int list_number[] = {0, 7, 1, 8, 4, 6, 3};
    int number_length = sizeof(list_number) / sizeof(list_number[0]);
    int value = 10;

    int index = LinearSearch(list_number, number_length, value);

    if (index != -1)
    {
        printf("Angka %d ditemukan di index %d", value, index);
    }
    else
    {
        printf("Angka %d tidak ditemukan", value);
    }

    return 0;
}