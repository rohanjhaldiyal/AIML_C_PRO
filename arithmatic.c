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
    printf("\nThe value of a+b+c is %d", a + b + c);
    printf("\nThe value of a-b-c is %d", a - b - c);
    printf("\nThe value of a*b*c is %d", a * b * c);
    printf("\nThe value of a/b/c is %d", a / b / c);
    printf("\nThe value of a%b is %d", a % b);
}