// 3. Store and retrieve the name of the students and obtained marks in c programming in 1st semester using structure.

#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    int marks;
} s[10];

void main()
{
    int n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of student : ");
        scanf("%s", &s[i].name);
            
        printf("Enter the marks in c programming: ");
        scanf("%d", &s[i].marks);
        
    }
    printf("\n\n The marks of students In the subjects are\n\n");
    printf("|%10s|", "Students");
   
    printf("%12s|", "Marks in C");

 
    for (i = 0; i < n; i++)
    {
        printf("\n|%10s|", s[i].name);
        printf("%10d|", s[i].marks);
        
    }

    printf("\n");
}