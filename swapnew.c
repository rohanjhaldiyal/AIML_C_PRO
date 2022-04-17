#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
}