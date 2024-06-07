#include <stdio.h>

int main()
{
    int gross_salary, net_salary, tax;
    double percent;

    printf("Masukkan nominal penghasilan bulanan anda: ");
    scanf("%d", &gross_salary);

    printf("Masukkan besar persen pajak bulanan anda: ");
    scanf("%lf", &percent);

    tax = (gross_salary * (percent / 100));
    net_salary = gross_salary - tax;

    printf("------------------------------------------------------ \n");

    printf("Besar potongan dari pajak %.1lf persen anda adalah %d \n", percent, tax);
    printf("Penghasilan yang kamu terima setelah potongan adalah %d", net_salary);

    return 0;
}