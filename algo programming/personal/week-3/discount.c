#include <stdio.h>

int main()
{
    long subtotal, total, discount_percent = 0, discount_price = 0, discount_buy_time = 0;
    int buy_time;

    printf("==========================================================\n");
    printf("===                Perhitungan Discount                ===\n");
    printf("==========================================================\n");

    printf("Masukkan total harga belanjaan: Rp ");
    scanf(" %ld", &subtotal);

    if (subtotal > 1000000)
    {
        discount_percent = 30;
        discount_price = subtotal * 30 / 100;
    }
    else if (subtotal >= 550000)
    {
        discount_percent = 20;
        discount_price = subtotal * 20 / 100;
    }
    else if (subtotal >= 200000 && subtotal <= 500000)
    {
        discount_percent = 10;
        discount_price = subtotal * 10 / 100;
    }

    printf("Seberapa sering berbelanja dalam sebulan: ");
    scanf(" %d", &buy_time);

    total = subtotal - discount_price;

    if (buy_time >= 4)
    {
        discount_buy_time = total * 20 / 100;
    }

    total -= discount_buy_time;

    printf("==========================================================\n");
    printf("Total harga belajaan         : Rp %ld", subtotal);
    printf("\nBesar discount               : %ld%%", discount_percent);
    printf("\nPotongan discount            : Rp %ld", discount_price);

    if (buy_time >= 4)
    {
        printf("\nPotongan tambahan (20%%)      : Rp %d", discount_buy_time);
    }

    printf("\n==========================================================\n");
    printf("Total yang harus dibayar     : Rp%d", total);

    return 0;
}