#include <stdio.h>

int main()
{
    enum matauang
    {
        penny = 1,
        nickel = 5,
        dime = 10,
        quarter = 25,
        dollar = 100
    };

    int money_units[5] = {
        dollar,
        quarter,
        dime,
        nickel,
        penny};

    char *unit_name[5] = {
        "dollar(s)",
        "quarter(s)",
        "dime(s)",
        "nickle(s)",
        "penny(s)"};

    int cent, temp, i;

    printf("Enter a monetary value in cents: ");
    scanf("%d", &cent);

    temp = 0;

    for (i = 0; i < 5; i++)
    {
        temp = cent / money_units[i];
        cent -= temp * money_units[i];

        if (temp)
        {
            printf("%d %s ", temp, unit_name[i]);
        }
    }

    return 0;
}