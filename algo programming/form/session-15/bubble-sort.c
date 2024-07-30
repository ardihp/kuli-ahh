#include <stdio.h>

void bubbleSort(int list_number[], int list_size)
{
    int i, j, temp;

    for (i = 1; i < list_size; i++)
    {
        for (j = 0; j < list_size; j++)
        {
            printf("j=%d   i=%d \n", list_number[j], list_number[i]);

            if (list_number[j] > list_number[i])
            {
                list_number[j] = list_number[i];
                list_number[i] = list_number[j];
            }
        }
    }

    printf("\n");

    for (i = 0; i < list_size; i++)
    {
        printf("%d ", list_number[i]);
    }
}

int main()
{
    int list_number[] = {3, 2, 1};
    int list_size = sizeof(list_number) / sizeof(list_number[0]);

    bubbleSort(list_number, list_size);

    return 0;
}