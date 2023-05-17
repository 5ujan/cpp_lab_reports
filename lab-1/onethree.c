// 3. Store and retrieve the name of the students and obtained marks in c programming in 1st semester using structure.

#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    int marks[6];
} s[5];

void main()
{
    int n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of student : ");
        scanf("%s", &s[i].name);
        for (j = 0; j < 6; j++)
        {
            printf("Enter the marks in subject %d: ", j);
            scanf("%d", &s[i].marks[j]);
        }
    }
    printf("\n\n The marks of students In the subjects are\n\n");
    printf("|%10s|", "Students");
    printf("%10s|", "Physics");
    printf("%10s|", "Maths");
    printf("%10s|", "C");
    printf("%10s|", "BEE");
    printf("%10s|", "App Mech");
    printf("%10s|", "Drawing");
    for (i = 0; i < n; i++)
    {
        printf("\n|%10s|", s[i].name);
        for (j = 0; j < 6; j++)
        {
            printf("%10d|", s[i].marks[j]);
        }
    }

    printf("\n");
}