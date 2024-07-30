#include <stdio.h>

void selectionSort(int list_number[], int list_size)
{
    int i, j, temp, min_index;

    for (i = 0; i < list_size; i++)
    {
        min_index = i;

        for (j = i + 1; j < list_size; j++)
        {
            if (list_number[min_index] > list_number[j])
            {
                min_index = j;
            }
        }

        temp = list_number[i];
        list_number[i] = list_number[min_index];
        list_number[min_index] = temp;
    }

    printf("\n");

    for (int i = 0; i < list_size; i++)
    {
        printf("%d ", list_number[i]);
    }
}

int main()
{
    int list_number[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int list_size = sizeof(list_number) / sizeof(list_number[0]);

    for (int i = 0; i < list_size; i++)
    {
        printf("%d ", list_number[i]);
    }

    selectionSort(list_number, list_size);

    return 0;
}