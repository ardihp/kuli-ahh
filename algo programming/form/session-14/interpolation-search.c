#include <stdio.h>

int interpolationSearch(int list_number[], int list_size, int value)
{
    int high = list_size - 1;
    int low = 0;

    while (value >= list_number[low] && value <= list_number[high] && low <= high)
    {
        int probe = low + (high - low) * (value - list_number[low]) / (list_number[high] - list_number[low]);

        printf("probe: %d\n", probe);

        if (list_number[probe] == value)
        {
            return probe;
        }
        else if (list_number[probe] <= value)
        {
            low = probe + 1;
        }
        else
        {
            high = probe - 1;
        }
    }

    return -1;
}

int main()
{
    int list_number[] = {5, 24, 78, 677, 1046, 9800};
    int list_size = sizeof(list_number) / sizeof(list_number[0]);
    int value = 9800;

    int index = interpolationSearch(list_number, list_size, value);

    if (index != -1)
    {
        printf("Angka %d ditemukan di index %d", value, index);
    }
    else
    {
        printf("Angka tidak ditemukan");
    }

    return 0;
}