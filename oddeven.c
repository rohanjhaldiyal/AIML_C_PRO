#include <stdio.h>

void main()
{
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("a = %d is an even number", a);
    else
        printf("a = %d is an odd number", a);
}