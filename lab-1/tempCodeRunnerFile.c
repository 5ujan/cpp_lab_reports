// 4. Write a program to read name, rollno, address, and phone number of each student in your class using structure. Store the information in file so that you can recover the information later. While recovering the information from the file sort the information alphabetically according to the name

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    char roll[10];
    char address[20];
};

void main()
{
    struct Student st[10], s[10], temp;
    int n, i, j;
    printf("Enter the number of students");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of student: ");
        scanf("%s", &st[i].name);
        printf("Enter the roll number of student: ");
        scanf("%s", &st[i].roll);
        printf("Enter the address of student: ");
        scanf("%s", &st[i].address);
    }
    FILE *fp;
    if ((fp = fopen("student_db.bin", "wb")) == NULL)
    {
        printf("\n Error creating file \n");
    }
    for (i = 0; i < n; i++)
    {
        fwrite(&st[i], sizeof(struct Student), 1, fp);
    }
    fclose(fp);

    FILE *fpo;
    if ((fpo = fopen("student_db.bin", "rb")) == NULL)
    {
        printf("\n Error reading file \n");
    }

    for (i = 0; i < n; i++)
    {

        fread(&s[i], sizeof(struct Student), 1, fpo);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 1)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("\n\n |%10s|", "Student");
    printf("%10s|", "Roll");
    printf("%10s|", "Address");

    for (i = 0; i < n; i++)
    {
        printf("\n %10s", s[i].name);
        printf(" %10s", s[i].roll);
        printf(" %10s", s[i].address);
    }
    printf("\n");
}