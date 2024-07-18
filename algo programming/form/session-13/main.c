#include <stdio.h>

int main()
{
    extern int x;

    printf("Hello world\n");
    printf("Nilai dari x adalah %d\n", x);

    return 0;
}