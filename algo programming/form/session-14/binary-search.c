#include <stdio.h>

int binarySearch(int list_char[], int list_size, int target)
{
    int low = 0;
    int high = list_size - 1;

    while (low <= high)
    {
        int middle = low + (high - low) / 2;
        int temp = list_char[middle];

        if (temp < target)
        {
            low = middle + 1;
        }
        else if (temp > target)
        {
            high = middle - 1;
        }
        else
        {
            return middle;
        }
    }

    return -1;
}

int main()
{
    int list_char[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int list_size = sizeof(list_char) / sizeof(list_char[0]);
    int target = 'H';

    int index = binarySearch(list_char, list_size, target);

    if (index != -1)
    {
        printf("Huruf %c ditemukan di index %d", target, index);
    }
    else
    {
        printf("Huruf %c tidak ditemukan", target);
    }

    return 0;
}