// 2. Write a program to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointer and string.

#include <stdio.h>

void main()
{
    int i;
    char *str = "I am writing a sentene without the letter that shall not me alled out", *ptr;
    for (i = 0;; i++)
    {
        ptr = str + i;
        if (*ptr == 'c')
        {
            printf("The position of character \"c\" in string is %d \n", i);
            break;
        }
        if (*ptr == '\0')
        {
            printf("The string doesn't contain the letter \"c\" \n");
            break;
        }
    }
}