#include <stdio.h>

void main()
{
    int year;
    printf("Enter the year \n", year);
    scanf("%d", &year);
    if (year % 4 == 0)
        printf("a = %d is leap year", year);
    else
        printf("a = %d is not leap year", year);
}