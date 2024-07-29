#include <stdio.h>

void insertionSort(int list_number[], int list_size)
{
    int temp, i, j;

    for (i = 1; i < list_size; i++)
    {
        temp = list_number[i];
        j = i - 1;

        while (j >= 0 && list_number[j] > temp)
        {
            list_number[j + 1] = list_number[j];
            j--;
        }
        list_number[j + 1] = temp;
    }

    printf("\n");

    for (int i = 0; i < list_size; i++)
    {
        printf("%d ", list_number[i]);
    }
}

int main()
{
    int list_number[] = {1, 7, 5, 3, 4, 2, 9, 8, 6};
    int list_size = sizeof(list_number) / sizeof(list_number[0]);

    for (int i = 0; i < list_size; i++)
    {
        printf("%d ", list_number[i]);
    }

    insertionSort(list_number, list_size);

    return 0;
}