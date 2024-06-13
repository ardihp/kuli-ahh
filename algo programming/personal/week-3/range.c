#include <stdio.h>
#include <conio.h>

void pressContinue()
{
    char pressedButton1;

    printf("Press enter to continue! ");
    pressedButton1 = getch();

    while (pressedButton1 != '\r' && pressedButton1 != '\n')
    {
        pressedButton1 = getch();
    }
}

int main()
{
    int range_x, in_meter, in_centimeter;

    printf("Masukan jarak tempuh X (satuan km): ");
    scanf("%d", &range_x);

    printf("==========================================================\n");
    printf("===                 Mengkonversi...                    ===\n");
    printf("==========================================================\n");

    pressContinue();

    in_meter = range_x * 1000;
    printf("\nJarak tempuh X bila di konfersikan (satuan m) = %dm \n", in_meter);

    pressContinue();

    in_centimeter = range_x * 100000;
    printf("\nJarak tempuh X bila di konfersikan (satuan cm) = %dcm", in_centimeter);

    return 0;
}