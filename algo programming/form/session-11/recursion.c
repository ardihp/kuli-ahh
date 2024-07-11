#include <stdio.h>

int findMax(int list_number[], int size, int currentHiggest)
{
    int len = size;
    int higgest = currentHiggest;
    int *ptr_higgest = &higgest;

    if (len == 1)
    {
        return higgest;
    }
    else
    {
        if (higgest < list_number[len - 1])
        {
            *ptr_higgest = list_number[len - 1];
        }

        len -= 1;
        findMax(list_number, len, higgest);
    }
}

int main()
{
    int array_number[] = {4, 6, 7, 3, 2};

    int len = sizeof(array_number) / sizeof(array_number[0]);

    printf("Mencari nilai terbesar dari sebuah array yang berisikan angka [4, 6, 7, 3, 2]. \n");
    printf("Nilai terbesarnya adalah: %d", findMax(array_number, len, 0));

    return 0;
}