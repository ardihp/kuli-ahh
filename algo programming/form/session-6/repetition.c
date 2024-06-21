#include <stdio.h>

int main()
{
    // While Loop
    printf("While Loop = ");

    int i = 3;
    while (i >= 1)
    {
        printf("%d", i);
        i--;
    }

    printf("\n");

    // For Loop
    printf("For Loop = ");
    for (int j = 0; j <= 3; j++)
    {
        printf("%d", j);
    }

    return 0;
}