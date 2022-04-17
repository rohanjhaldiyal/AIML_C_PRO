#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    printf("Enter the value of c \n");
    scanf("%d", &c);
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("The greatest of 3 numbers is %d", max);
}