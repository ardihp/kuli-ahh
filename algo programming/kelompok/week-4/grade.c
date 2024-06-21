#include <stdio.h>
#include <string.h>

int main()
{
    char student[30], *grade, *desc;

    for (int loop = 1; loop <= 10; loop++)
    {
        int quiz_score, task_score, absent_score, exercise_score, exam_score, average_score;

        printf("Masukkan Nama Mahasiswa: ");
        scanf(" %[^\n]s", student);

        printf("===============================\n");

        printf("Nilai Quiz: ");
        scanf(" %d", &quiz_score);

        while (quiz_score > 100)
        {
            printf("Nilai tidak boleh melebihi 100.\n");

            if (quiz_score > 100)
            {
                printf("Nilai Quiz: ");
                scanf("%d", &quiz_score);
            }
        }

        printf("Nilai Tugas: ");
        scanf(" %d", &task_score);

        while (task_score > 100)
        {
            printf("Nilai tidak boleh melebihi 100.\n");

            if (task_score > 100)
            {
                printf("Nilai Tugas: ");
                scanf("%d", &task_score);
            }
        }

        printf("Nilai Absen: ");
        scanf(" %d", &absent_score);

        while (absent_score > 100)
        {
            printf("Nilai tidak boleh melebihi 100.\n");

            if (absent_score > 100)
            {
                printf("Nilai Absen: ");
                scanf("%d", &absent_score);
            }
        }

        printf("Nilai Praktek: ");
        scanf(" %d", &exercise_score);

        while (exercise_score > 100)
        {
            printf("Nilai tidak boleh melebihi 100.\n");

            if (exercise_score > 100)
            {
                printf("Nilai Praktek: ");
                scanf("%d", &exercise_score);
            }
        }

        printf("Nilai UAS: ");
        scanf(" %d", &exam_score);

        while (exam_score > 100)
        {
            printf("Nilai tidak boleh melebihi 100.\n");

            if (exam_score > 100)
            {
                printf("Nilai UAS: ");
                scanf("%d", &exam_score);
            }
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

    return 0;
}