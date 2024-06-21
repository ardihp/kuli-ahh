#include <stdio.h>

int main()
{
    int hour_price, user_hour, user_bill, discountPercent, discountPrice, real_price;
    char user_name[100];

    hour_price = 10000;

    printf("==========================================================\n");
    printf("===                 Warnet Suka-Suka                   ===\n");
    printf("===                   Harga Billing                    ===\n");
    printf("==========================================================\n");
    printf("===   1 Jam     :     Rp10000                          ===\n");
    printf("==========================================================\n");
    printf("===   Discount Potongan Harga                          ===\n");
    printf("===   > 4 Jam   :     10%%                              ===\n");
    printf("===   > 6 Jam   :     15%%                              ===\n");
    printf("===   > 8 Jam   :     20%%                              ===\n");
    printf("===   > 10 Jam  :     25%%                              ===\n");
    printf("==========================================================\n");

    printf("Masukkan nama kamu: ");
    gets(user_name);

    printf("Berapa jam kamu ingin bermain ? ");

    char junkChar;
    while (scanf("%d", &user_hour) < 1)
    {
        printf("Error: Invalid input. Please enter a valid integer.\n");

        scanf("%c", &junkChar);
        if (user_hour < 1)
        {
            scanf("%d", &user_hour);
        }
    }

    if (user_hour > 10)
    {
        discountPercent = 25;
        discountPrice = (hour_price * user_hour) * (25 * 0.01);
    }
    else if (user_hour > 8)
    {
        discountPercent = 20;
        discountPrice = (hour_price * user_hour) * (20 * 0.01);
    }
    else if (user_hour > 6)
    {
        discountPercent = 15;
        discountPrice = (hour_price * user_hour) * (15 * 0.01);
    }
    else if (user_hour > 4)
    {
        discountPercent = 10;
        discountPrice = (hour_price * user_hour) * (10 * 0.01);
    }
    else
    {
        discountPercent = 0;
        discountPrice = 0;
    }

    user_bill = (hour_price * user_hour) - discountPrice;
    real_price = hour_price * user_hour;

    printf("==========================================================\n");
    printf("Jam bermain             : %d Jam\n", user_hour);
    printf("Discount yang didapat   : %d%% (Rp%d) \n\n", discountPercent, discountPrice);

    printf("Harga sebelum potongan  : Rp%d \n", real_price);
    printf("Harga akhir             : Rp%d\n", user_bill);
    printf("==========================================================");

    return 0;
}