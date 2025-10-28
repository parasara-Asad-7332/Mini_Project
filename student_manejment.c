#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int Roll_Num;
    char name[30];
    float avg;
};

int main()
{
    struct student s[50];
    int n, i, j, marks, sum, sub, S;
    int S_Roll;
    char S_Name[30];

    char date[15];
    char c;
    FILE *ptr;
    printf("(1)-Add student\n");
    printf("(2)-Save Data\n");
    printf("(3)-Exit\n");
    printf("What did you want: ");
    scanf(" %c", &c);

    ptr = fopen("student.txt", "a");
    if (ptr == NULL)
    {
        printf("open Error");
        return 1;
    }

    if (c == '1')
    {

        printf("What is date today(dd/mm/yy): ");
        scanf("%s", date);

        printf("How many student: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            sum = 0;
            printf("\nStudent %d\n", i + 1);
            printf("Enter student Roll_Number : ");
            scanf("%d", &s[i].Roll_Num);
            printf("Enter student name : ");
            scanf("%s", s[i].name);
            printf("Enter How many subject: ");
            scanf("%d", &sub);
            for (j = 0; j < sub; j++)
            {
                printf("Enter marks of subject %d: ", j + 1);
                scanf("%d", &marks);
                sum = sum + marks;
            }
            s[i].avg = sum / sub;
        }

        printf("--------Student Reprot Crad-------");
        fprintf(ptr, "--------Student Reprot Crad-------");
        for (i = 0; i < n; i++)

        {
            printf("\nStudent %d\n", i + 1);
            printf("Name             :  %s\n", s[i].name);
            printf("Roll Number      :  %d\n", s[i].Roll_Num);
            printf("Subject Total is :  %d\n", sum);
            printf("Marks Avgrage    :  %.2f\n", s[i].avg);

            fprintf(ptr, "\nStudent %d\n", i + 1);
            fprintf(ptr, "Name             :  %s\n", s[i].name);
            fprintf(ptr, "Roll Number      :  %d\n", s[i].Roll_Num);
            fprintf(ptr, "Subject Total is :  %d\n", sum);
            fprintf(ptr, "Marks Avgrage    :  %.2f\n", s[i].avg);
        }

        printf("\nStudent data saved\n");
    }

    else if (c == '2')
    {
        ptr = fopen("Student.txt", "r");
        char line[3000];
        if (ptr == NULL)
        {
            printf("File is Clean ");
        }
        else
        {
            while (fgets(line, sizeof(line), ptr))
            {
                printf("%s", line);
            }
        }
    }
    else if(c == '3'){
        return 0;
    }

    fclose(ptr);

    system("pause\n");
    return 0;
}


