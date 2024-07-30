#include <stdio.h>
#include <stdlib.h>

void mergeArray(int left_array[], int right_array[], int list_number[], int list_size)
{
    int left_size = list_size / 2;
    int right_size = list_size - left_size;
    int i = 0, l = 0, r = 0;

    while (l < left_size && r < right_size)
    {
        if (left_array[l] < right_array[r])
        {
            list_number[i] = left_array[l];
            i++;
            l++;
        }
        else
        {
            list_number[i] = right_array[r];
            i++;
            r++;
        }
    }

    while (l < left_size)
    {
        list_number[i] = left_array[l];
        i++;
        l++;
    }
}

void mergeSort(int list_number[], int list_size)
{
    if (list_size <= 1)
    {
        return;
    }

    int middle = list_size / 2;
    int *left_array = (int *)malloc(middle * sizeof(int));
    int *right_array = (int *)malloc((list_size - middle) * sizeof(int));

    if (left_array == NULL)
    {
        // Handle memory allocation failure
        printf("Memory allocation failed left\n");
        return;
    }
    if (right_array == NULL)
    {
        // Handle memory allocation failure
        printf("Memory allocation failed right\n");
        return;
    }

    for (int i = 0; i < middle; i++)
    {
        left_array[i] = i;
    }

    for (int i = 0; i < list_size - middle; i++)
    {
        right_array[i] = i;
    }

    int i = 0;
    int j = 0;

    for (; i < list_size; i++)
    {
        if (i < middle)
        {
            left_array[i] = list_number[i];
        }
        else
        {
            right_array[j] = list_number[i];
            j++;
        }
    }

    mergeSort(left_array, middle);
    mergeSort(right_array, list_size - middle);
    mergeArray(left_array, right_array, list_number, list_size);
}

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

    printf("\nInsertion Sort: ");

    for (int i = 0; i < list_size; i++)
    {
        printf("%d ", list_number[i]);
    }
}

int main()
{
    int list_number1[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int list_size1 = sizeof(list_number1) / sizeof(list_number1[0]);

    int list_number2[] = {7, 5, 3, 6, 1, 4, 2, 9, 8};
    int list_size2 = sizeof(list_number2) / sizeof(list_number2[0]);

    for (int i = 0; i < list_size1; i++)
    {
        printf("%d ", list_number1[i]);
    }

    mergeSort(list_number1, list_size1);

    printf("\nMerge Sort: ");

    for (int i = 0; i < list_size1; i++)
    {
        printf("%d ", list_number1[i]);
    }

    printf("\n\n");

    for (int i = 0; i < list_size2; i++)
    {
        printf("%d ", list_number2[i]);
    }

    insertionSort(list_number2, list_size2);

    return 0;
}