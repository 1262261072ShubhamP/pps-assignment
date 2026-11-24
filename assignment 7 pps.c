#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};

int main()
{
    struct Student s[50];
    int n, i, j;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;

        for(j = 0; j < 3; j++)
        {
            printf("Enter marks of subject %d: ", j+1);
            scanf("%d", &s[i].marks[j]);

            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 3.0;
    }

    printf("\nRoll No\tName\tSub1\tSub2\tSub3\tTotal\tPercentage\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t", s[i].rollno, s[i].name);

        for(j = 0; j < 3; j++)
        {
            printf("%d\t", s[i].marks[j]);
        }

        printf("%d\t%.2f\n", s[i].total, s[i].percentage);
    }

    return 0;
}