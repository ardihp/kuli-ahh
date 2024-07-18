#include <stdio.h>
#include <math.h>

typedef struct
{
    double nominal, qty_coupon, discount, total_discount, discount_amount, subtotal, total;
} Transaction;

Transaction DataReceiver(Transaction bill)
{
    bill.discount = 5;

    printf("Masukkan nominal belanja : ");
    scanf("%lf", &bill.nominal);

    bill.subtotal = bill.nominal;

    if (bill.subtotal >= 700000)
    {
        bill.qty_coupon = 7;
        bill.total_discount = 35;
    }
    else
    {
        bill.qty_coupon = floor(bill.subtotal / 100000);
        bill.total_discount = bill.qty_coupon * bill.discount;
    }

    bill.discount_amount = (bill.subtotal * (bill.total_discount / 100));
    bill.total = bill.subtotal - bill.discount_amount;

    return bill;
};

int main()
{
    Transaction bill;

    printf("===================================================\n");
    printf("Supermarket Berkah \n");
    printf("===================================================\n");
    printf("Dapatkan kupon potongan harga 5%% dengan minimal \n");
    printf("belanja Rp100.000, berlaku kelipatan up to 35%% \n");
    printf("===================================================\n");

    bill = DataReceiver(bill);

    printf("\nSubtotal belanja : Rp%.lf", bill.subtotal);
    printf("\nKupon belanja didapat : %.lf", bill.qty_coupon);

    if (bill.qty_coupon == 7)
    {
        printf(" (kupon diskon maksimal)");
    }

    printf("\nPotongan Diskon (%.lf%%) : -Rp%.lf", bill.total_discount, bill.discount_amount);
    printf("\nTotal belanja : Rp%.lf", bill.total);

    return 0;
}