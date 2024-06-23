#include <stdio.h>
#include <string.h>

void removeNumber(char *str)
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

void gradeCalculatorApp()
{
    char student[30], *grade, *desc;

    for (int loop = 1; loop <= 10; loop++)
    {
        int quiz_score, task_score, absent_score, exercise_score, exam_score, average_score;

        printf("Masukkan Nama Mahasiswa: ");
        scanf(" %[^\n]%*c", student);

        removeNumber(student);

        printf("===============================\n");

        printf("Nilai Quiz: ");
        while (scanf(" %d", &quiz_score) == 0)
        {
            printf("Input hanya menerima angka: ");
            scanf(" %*s");
        }

        while (quiz_score > 100 || quiz_score == 0)
        {
            printf("Nilai tidak boleh melebihi 100.\n");

            if (quiz_score > 100 && quiz_score != 0)
            {
                printf("Nilai Quiz: ");
                scanf(" %d", &quiz_score);
            }
            scanf("%*s");
        }

        printf("Nilai Tugas: ");
        while (scanf(" %d", &task_score) == 0)
        {
            printf("Input hanya menerima angka: ");
            scanf("%*s");
        }

        while (task_score > 100 || task_score == 0)
        {
            printf("Nilai tidak boleh melebihi 100.\n");
            if (task_score > 100 && task_score != 0)
            {
                printf("Nilai Tugas: ");
                scanf("%d", &task_score);
            }
            scanf("%*s");
        }

        printf("Nilai Absen: ");
        while (scanf(" %d", &absent_score) == 0)
        {
            printf("Input hanya menerima angka: ");
            scanf("%*s");
        }

        while (absent_score > 100 || absent_score == 0)
        {
            printf("Nilai tidak boleh melebihi 100.\n");
            if (absent_score > 100 && absent_score != 0)
            {
                printf("Nilai Absen: ");
                scanf("%d", &absent_score);
            }
            scanf("%*s");
        }

        printf("Nilai Praktek: ");
        while (scanf(" %d", &exercise_score) == 0)
        {
            printf("Input hanya menerima angka: ");
            scanf("%*s");
        }

        while (exercise_score > 100 || exercise_score == 0)
        {
            printf("Nilai tidak boleh melebihi 100.\n");
            if (exercise_score > 100 && exercise_score != 0)
            {
                printf("Nilai Praktek: ");
                scanf("%d", &exercise_score);
            }
            scanf("%*s");
        }

        printf("Nilai UAS: ");
        while (scanf(" %d", &exam_score) == 0)
        {
            printf("Input hanya menerima angka: ");
            scanf("%*s");
        }

        while (exam_score > 100 || exam_score == 0)
        {
            printf("Nilai tidak boleh melebihi 100.\n");
            if (exam_score > 100 && exam_score != 0)
            {
                printf("Nilai UAS: ");
                scanf("%d", &exam_score);
            }
            scanf("%*s");
        }

        average_score = (quiz_score + task_score + absent_score + exercise_score + exam_score) / 5;

        if (average_score <= 55)
        {
            grade = "E";
            desc = "Tidak Lulus";
        }
        else if (average_score <= 65)
        {
            grade = "D";
            desc = "Tidak Lulus";
        }
        else if (average_score <= 75)
        {
            grade = "C";
            desc = "Lulus";
        }
        else if (average_score <= 85)
        {
            grade = "B";
            desc = "Lulus";
        }
        else
        {
            grade = "A";
            desc = "Lulus";
        }

        printf("===============================\n");
        printf("Nilai rata-rata : %d (%s)\n", average_score, grade);
        printf("Keterangan : Mahasiswa %s %s\n\n", student, desc);
    }
}