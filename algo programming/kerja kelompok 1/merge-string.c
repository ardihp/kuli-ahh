#include <stdio.h>
#include <string.h>

int main()
{
    char kalimat1[50], kalimat2[50], kalimat3[50], groupingKalimat[150];
    int lengthKalimat1, lengthKalimat2, lengthKalimat3, sumLengthKalimat;

    printf("Masukkan Kalimat Pertama: ");
    fgets(kalimat1, sizeof(kalimat1), stdin);

    printf("Masukkan Kalimat Kedua: ");
    fgets(kalimat2, sizeof(kalimat1), stdin);

    printf("Masukkan Kalimat Ketiga: ");
    fgets(kalimat3, sizeof(kalimat1), stdin);

    snprintf(groupingKalimat, sizeof(groupingKalimat), "%s %s %s", kalimat1, kalimat2, kalimat3);

    lengthKalimat1 = strlen(kalimat1);
    lengthKalimat2 = strlen(kalimat2);
    lengthKalimat3 = strlen(kalimat3);
    sumLengthKalimat = lengthKalimat1 + lengthKalimat2 + lengthKalimat3;

    printf("=========================================== \n");
    printf("Gabungan 3 buah inputan kalimat = %s \n", groupingKalimat);

    strrev(groupingKalimat);
    printf("Hasil membalik kalimat gabungan = %s \n", groupingKalimat);

    printf("Jumlah Huruf kalimat pertama = %d \n", lengthKalimat1);
    printf("Jumlah Huruf kalimat kedua = %d \n", lengthKalimat2);
    printf("Jumlah Huruf kalimat ketiga = %d \n", lengthKalimat3);
    printf("Total Jumlah huruf = %d \n", sumLengthKalimat);

    return 0;
}