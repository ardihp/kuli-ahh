#include <stdio.h>

int main()
{
    int inputSeconds, outputHours, outputMinutes, outputSeconds, minutesRemaining;

    printf("============================= \n");
    printf("Enter Seconds: ");
    if (scanf("%d", &inputSeconds) != 1)
    {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1; // Exiting with a non-zero status to indicate an error
    }
    printf("============================= \n\n");

    outputHours = inputSeconds / 3600;
    minutesRemaining = inputSeconds % 3600;
    outputMinutes = minutesRemaining / 60;
    outputSeconds = minutesRemaining % 60;

    printf("============================= \n");
    printf("Mengkonversi \n");
    printf("============================= \n");
    printf("Jam : %d \n", outputHours);
    printf("Menit : %d \n", outputMinutes);
    printf("Detik : %d \n", outputSeconds);

    return 0;
}