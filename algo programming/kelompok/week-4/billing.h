#include <stdio.h>

void printBillingHeader()
{
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
}

void printBillingResult(int user_hour, int discountPercent, int discountPrice, int real_price, int user_bill)
{
    printf("==========================================================\n");
    printf("Jam bermain             : %d Jam\n", user_hour);
    printf("Discount yang didapat   : %d%% (Rp%d) \n\n", discountPercent, discountPrice);

    printf("Harga sebelum potongan  : Rp%d \n", real_price);
    printf("Harga akhir             : Rp%d\n", user_bill);
    printf("==========================================================");
}

void billingApp()
{
    int hour_price, user_hour, user_bill, discountPercent, discountPrice, real_price;
    char *user_name;

    hour_price = 10000;

    printBillingHeader();

    printf("Masukkan nama kamu: ");
    scanf(" %[^\n]s", &user_name);

    printf("Berapa jam kamu ingin bermain ? ");

    while (scanf(" %d", &user_hour) == 0)
    {
        printf("Harap masukkan angka: ");
        scanf("%*s");
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

    printBillingResult(user_hour, discountPercent, discountPrice, real_price, user_bill);
}