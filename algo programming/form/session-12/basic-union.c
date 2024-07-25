#include <stdio.h>

union employee
{
    int year_join;
    int year_left;
};

int main()
{
    union employee EMP;

    EMP.year_join = 2020;
    EMP.year_left = 2024;

    printf("You join at: %d \n", EMP.year_join);
    printf("You left at: %d", EMP.year_left);

    return 0;
}