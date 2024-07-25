#include <stdio.h>

int main()
{
    FILE *dummy;
    int c, n = 0;
    char sentence[256];

    printf("Apa yang mau kamu isi ke dalam file joko.txt: ");
    fgets(sentence, 256, stdin);

    dummy = fopen("joko.txt", "w");

    if (dummy == NULL || !dummy)
    {
        perror("Gagal membuka file joko.txt");
        return 1;
    }
    fputs(sentence, dummy);

    printf("Isi File joko.txt: \n");

    while (fgets(sentence, 256, dummy))
    {
        puts(sentence);
    }

    fclose(dummy);

    return 0;
}