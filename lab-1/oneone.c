// 1. Write a program to find the average expenditure of a company for each month of each year, each year and average over the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average.

#include <stdio.h>

void main()
{
    char months[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int expenditure[10][12];
    int startYear, endYear, numYears, i, j, sum = 0, tot = 0;
    float mean, ave = 0;

    printf("Enter start year: ");
    scanf("%d", &startYear);

    printf("Enter end year: ");
    scanf("%d", &endYear);

    numYears = endYear - startYear + 1;
    for (i = 0; i < numYears; i++)
    {
        printf("enter the expenditure for the year %d: \n", startYear + i);
        for (j = 0; j < 12; j++)
        {
            printf("Enter the expenditure for the month %s: ", months[j]);
            scanf("%d", &expenditure[i][j]);
        }
    }

    printf("\n\n %50s \n", "Expenditures");
    for (i = 0; i < 75; i++)
    {
        printf("%s", "--");
    }

    printf("\n|%10s |", "Months");
    for (i = 0; i < 12; i++)
    {
        printf("%9s |", months[i]);
    }
    printf("%9s |", "Sum");
    printf("%9s |", "Average");
    for (i = startYear; i <= endYear; i++)
    {
        printf("\n| %9d |", i);
        sum = 0;
        for (j = 0; j < 12; j++)
        {
            printf("%9d |", expenditure[i - startYear][j]);
            sum += expenditure[i - startYear][j];
        }
        mean = sum / 12;
        printf("%9d |", sum);
        printf("%9.2f |", mean);
        tot += sum;
        ave += mean;
    }
    printf("\n");
    for (i = 0; i < 75; i++)
    {
        printf("%s", "--");
    }

    printf("\n\n The total expenditure from %d to %d is %d and average expenditure of each year is %.2f and of each month is %.2f \n", startYear, endYear, sum, (float)tot / numYears, (float)mean / numYears);
}
