#include <stdio.h>

int main()
{
    int input_number, primeFlag;

    printf("Masukkan angka (0 - 10): ");
    scanf("%d", &input_number);

    for (int loop = 2; loop <= input_number / 2; loop++)
    {
        if (input_number % loop == 0)
        {
            primeFlag = 1;
            break;
        }
    }

    if (primeFlag == 1 || input_number == 1)
    {
        printf("Angka kamu bukan angka prima");
    }
    else
    {
        printf("Angka kamu adalah angka prima");
    }

    return 0;
}