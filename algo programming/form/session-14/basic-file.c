#include <stdio.h>

int main()
{
    FILE *dummy;
    int c, n = 0;
    char sentence[256];

    // printf("Apa yang mau kamu isi ke dalam file joko.txt: ");
    // fgets(sentence, 256, stdin);

    // dummy = fopen("joko.txt", "a");

    // if (dummy == NULL || !dummy)
    // {
    //     perror("Gagal membuka file joko.txt");
    //     return 1;
    // }
    // fputs(sentence, dummy);

    // fclose(dummy);

    dummy = fopen("joko.txt", "r");

    printf("Isi File joko.txt: \n");
    // do
    // {
    //     c = fgetc(dummy);

    //     if (c == '$')
    //     {
    //         n++;
    //     }

    //     printf("%c", c);
    // } while (c != EOF);
    if (fgets(sentence, 256, dummy) != NULL)
    {
        puts(sentence);
    }

    fclose(dummy);

    return 0;
}